//
//  templates6.4.h
//  OOlabs
//
//  Created by Илья Овсянников on 13.12.2025.
//

#ifndef TEMPLATES6_4_H
#define TEMPLATES6_4_H
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
    void info();
    
    class iterator
    {
    public:
        iterator();
        int index;
        Container* cdata;
        iterator(int i, Container* c);
        iterator& operator++();
        iterator& operator--();
        bool operator !=(const iterator& x);
        bool operator ==(const iterator& x);
        T& operator*();
        T last_value;
    };
    iterator begin();
    iterator end();
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

template <class T>
void Container<T>::info()
{
    for (int i = 0; i < size; i++){
        std::cout << data[i];
        if (i!= size-1){
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

template <class T>
Container<T>::iterator::iterator()
    : index(0), cdata(nullptr), last_value() {}

template <class T>
Container<T>::iterator::iterator(int i, Container<T>* c)
    : index(i), cdata(c), last_value() {}


template <class T>
typename Container<T>::iterator& Container<T>::iterator::operator++() {
    int n = cdata->size;
    int i = index + 1;
    while (i < n && cdata->data[i] < last_value) {
        ++i;
    }
    index = i;
    if (index < n) {
        last_value = cdata->data[index];
    }
    return *this;
}

template <class T>
typename Container<T>::iterator& Container<T>::iterator::operator--() {
    if (index > 0) {
        --index;
        last_value = cdata->data[index];
    }
    return *this;
}

template <class T>
bool Container<T>::iterator::operator!=(const Container<T>::iterator& x) {
    return index != x.index || cdata != x.cdata;
}

template <class T>
bool Container<T>::iterator::operator==(const Container<T>::iterator& x) {
    return index == x.index && cdata == x.cdata;
}

template <class T>
T& Container<T>::iterator::operator*() {
    return cdata->data[index];
}


template <class T>
typename Container<T>::iterator Container<T>::begin() {
    iterator it;
    it.cdata = this;
    it.index = 0;
    it.last_value = data[0];
    return it;
}

template <class T>
typename Container<T>::iterator Container<T>::end() {
    iterator it;
    it.cdata = this;
    it.index = size;
    return it;
}


#endif



