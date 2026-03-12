#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <iomanip>

//Размер матрицы:              100-----200-------500---1000---2000---3000---3500---4000---5000
//Время с ускорением Debug:    0.0031--0.026----0.42---3.21---25.9...
//Время без ускорения Debug:   0.0051--0.041----0.64---5.23---46.3...
//Кратность ускорения Debug:   1.6-----1.57-----1.51---1.62---1.78...
//Время с ускорением Release:  0.0006--0.004----0.06---0.56---4.49---15.4---24.2---36.9---71.41
//Время без ускорения Release: 0.0007--0.006----0.14---1.17---10.2---41.5---115.7--191.9--359.9
//Кратность ускорения Release: 1.22----1.35-----2.05---2.07---2.26---2.69---4.7----5.19---5.03

using namespace std;
using namespace std::chrono;

void multiply_blocked(const vector<double>& A, const vector<double>& B_transposed,
                      vector<double>& C, int N) {
    const int BS = 64;

    for (int ii = 0; ii < N; ii += BS) {
        int i_end = min(ii + BS, N);
        for (int jj = 0; jj < N; jj += BS) {
            int j_end = min(jj + BS, N);
            for (int kk = 0; kk < N; kk += BS) {
                int k_end = min(kk + BS, N);

        
                for (int i = ii; i < i_end; ++i) {
                    const double* rowA = &A[i * N + kk];
                    for (int j = jj; j < j_end; ++j) {
                        const double* rowB = &B_transposed[j * N + kk];
                        double sum = C[i * N + j];

                        for (int k = kk; k < k_end; ++k) {
                            sum += rowA[k - kk] * rowB[k - kk];
                        }
                        C[i * N + j] = sum;
                    }
                }
            }
        }
    }
}

int main() {
    const int N = 5000;
    cout << "Умножение матриц " << N << " × " << N << "\n\n";

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dist(-1.0, 1.0);

    vector<double> A(N * N);
    vector<double> B(N * N);
    vector<double> C_blocked(N * N, 0.0);
    vector<double> C_naive(N * N, 0.0);
    vector<double> B_transposed(N * N);

    for (int i = 0; i < N * N; ++i) {
        A[i] = dist(gen);
        B[i] = dist(gen);
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            B_transposed[i * N + j] = B[j * N + i];
        }
    }

    double time_blocked, time_naive;

    auto start1 = high_resolution_clock::now();
    multiply_blocked(A, B_transposed, C_blocked, N);
    auto end1 = high_resolution_clock::now();
    time_blocked = duration<double>(end1 - start1).count();

    auto start2 = high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            double sum = 0.0;
            for (int k = 0; k < N; ++k) {
                sum += A[i * N + k] * B[k * N + j];
            }
            C_naive[i * N + j] = sum;
        }
    }
    auto end2 = high_resolution_clock::now();
    time_naive = duration<double>(end2 - start2).count();

    double speedup = time_naive / time_blocked;

    cout << fixed << setprecision(4);
    cout << "Оптимизированный метод:  " << time_blocked << " сек\n";
    cout << "Наивный метод:           " << time_naive   << " сек\n";
    cout << "Ускорение:               " << speedup << "× быстрее\n\n";

    cout << "Контроль: C_blocked[0] = " << C_blocked[0]
         << ", C_naive[0] = " << C_naive[0] << endl;

    return 0;
}
