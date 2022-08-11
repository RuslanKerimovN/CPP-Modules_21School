#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>

template <typename T>
class Array {
public:
    Array();
    Array(unsigned int n);
    Array(Array<T> const& object);
    Array<T>& operator=(Array<T> const& object);
    T& operator[](int n);
    int size() const;
    ~Array();

private:
    int length;
    T   *array;

public:
    class ErrorElementArrayException : public std::exception {
        const char* what() const throw() {
            return "Incorrect reference to Element of Array";
        }
    };
};

#endif
