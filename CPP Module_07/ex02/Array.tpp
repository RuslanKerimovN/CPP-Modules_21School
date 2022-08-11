#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.h"

template <typename T>
Array<T>::Array() : length(0), array(NULL) {
}

template <typename T>
Array<T>::Array(unsigned int n) : length(0), array(NULL) {
    this->length = n;
    if (n > 0)
        array = new T[this->length];
}

template <typename T>
Array<T>::Array(Array<T> const& object) : length(0), array(NULL) {
    this->length = object.length;
    this->array = new T[this->length];
    for (int i = 0; i < this->length; i++) {
        this->array[i] = object.array[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& object)  {
    if (array) 
        delete[] array;
    this->length = object.length;
    this->array = new T[this->length];
    for (int i = 0; i < length; i++) {
        this->array[i] = object.array[i];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](int n) {
    if (n >= this->length || n < 0)
        throw ErrorElementArrayException();
    return this->array[n];
}

template <typename T>
int Array<T>::size() const {
    return this->length;
}

template <typename T>
Array<T>::~Array() {
    if (this->array)
        delete[] array;
}

#endif
