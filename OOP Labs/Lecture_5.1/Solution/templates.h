//
//  templates.h
//  OOlabs
//
//  Created by Илья Овсянников on 13.11.2025.
//
#ifndef TEMPLATES_H
#define TEMPLATES_H

template <class T>
int countLess(T* arr, int n, T& value)
{
int count = 0;
for (int i = 0; i < n; i++){
if (arr[i] < value){
++count;
}
}
return count;
}

template <class T>
int countGreater(T* arr, int n, T& value) {
int count = 0;
for (int i = 0; i < n; i++) {
if (arr[i] > value) {
++count;
}
}
return count;
}

#endif
