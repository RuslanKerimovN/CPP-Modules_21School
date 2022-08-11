#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template <typename T>
void iter(T *mass, int lenght, void (*f)(const T &value)) {
    for (int i = 0; i < lenght; i++)
        f(mass[i]);
    std::cout << "End of function" << std::endl;
}

#endif