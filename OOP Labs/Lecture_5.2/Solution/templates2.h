//
//  templates2.h
//  OOlabs
//
//  Created by Илья Овсянников on 16.11.2025.
//
#ifndef TEMPLATES2_H
#define TEMPLATES2_H
#include <iostream>

const int MAXSIZE = 5;

template <class T>
class Container
{
private:
    T data[MAXSIZE];
    int size;
public:
    Container();
    void add(T x);
    void del();
    
    friend std::ostream& operator<< (std::ostream& os, const Container<T>& c) {
            for (int i = 0; i < c.size; i++) {
                os << c.data[i];
                if (i != c.size - 1)
                    os << ", ";
            }
            return os;
        }
};

template <class T>
Container<T>::Container()
{
    size = 0;
}

template <class T>
void Container<T>::add(T x)
{
    if (size >= MAXSIZE) {
        std::cout << "Ошибка: контейнер заполнен, добавление невозможно." << std::endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        if (data[i] == x) {
            std::cout << "Ошибка: элемент уже существует в контейнере." << std::endl;
            return;
        }
    }
    data[size] = x;
    size++;
}


template <class T>
void Container<T>::del()
{
    if (size <= 0) {
        std::cout << "Ошибка: контейнер пуст, удаление невозможно." << std::endl;
        return;
    }
    size--;
}

#endif

