//
//  lab5_3.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 19.11.2025.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <cassert>

bool isCapitalized(const std::string &word) {
    if (word.empty()) return false;
    unsigned char ch = static_cast<unsigned char>(word[0]);
    return std::isupper(ch) || (ch >= 0xC0 && ch <= 0xDF);
}

void checkFormat(const std::string &filename) {
    std::ifstream file(filename);
    assert(file.is_open() && "Файл не может быть открыт");

    std::string line;

    std::getline(file, line);
    assert(line == "Список cтудентов." && "Некорректный заголовок файла");

    while (std::getline(file, line)) {

        std::istringstream iss(line);
        std::string numDot;
        iss >> numDot;

        assert(!numDot.empty() && numDot.back() == '.' && "Строка должна начинаться с номера и точки");
        numDot.pop_back();
        for (char c : numDot) {
            assert(std::isdigit(static_cast<unsigned char>(c)) && "Номер должен содержать только цифры");
        }

        std::string part1, part2, part3, yearStr, place;
        iss >> part1 >> part2 >> part3 >> yearStr >> place;

        assert(!part1.empty() && !part2.empty() && !part3.empty() && !yearStr.empty() && !place.empty() &&
            "После номера должно быть 5 групп символов");

        assert(isCapitalized(part1) && isCapitalized(part2) && isCapitalized(part3) && isCapitalized(place) &&
            "Все слова должны начинаться с большой буквы");

        int year = std::stoi(yearStr);
        assert(year >= 1950 && year <= 2010 && "Год должен быть от 1950 до 2010");
    }
}

int main() {
    std::locale("ru_RU.UTF-8");
    try {
        checkFormat("/Users/ilaovsannikov/прог-е/OOPlabs/OOlabs/list.txt");
        std::cout << "Формат файла корректен" << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
