#include<iostream>
#include "my_array.h"

using namespace std;

int main()
{
    MyArray arr1, arr2, arr3,arr4;
    arr1.add(3);
    arr1.add(4);
    arr1.add(5);
    arr1.info();
    arr1.del();
    arr1.info();
    arr2.add(10);
    arr2.add(12);
    arr3 = arr1 + arr2;
    arr3.info();
    
    cout << arr1 % 3<<"\n";
    cout << arr1 % 9<<"\n";
    
    cout << "arr1: ";
    arr1.info();
    arr1++;
    arr1.info();
    ++arr1;
    arr1.info();
    
    cout << "arr2: ";
    arr2.info();
    arr2--;
    arr2.info();
    --arr2;
    arr2.info();
    
    return 0;
}
