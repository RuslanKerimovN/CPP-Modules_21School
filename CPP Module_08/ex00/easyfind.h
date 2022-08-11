#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

class ErrorNotFoundValueException : public std::exception {
    const char* what() const throw() {
        return "Not Found Value";
    }
};

template <typename T>
typename T::const_iterator easyfind(T const& container, int const value) {
    typename T::const_iterator returned = std::find(container.cbegin(),
        container.cend(), value);
    if (returned == container.end())
        throw ErrorNotFoundValueException();
    return returned;
}

#endif