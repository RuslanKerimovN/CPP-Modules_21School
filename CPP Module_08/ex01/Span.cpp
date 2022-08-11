#include "Span.h"

Span::Span(int N) {
    if (N < 0)
        throw ErrorSizeException();
    this->array.reserve(N);
}

Span::~Span() {}

Span& Span::operator=(const Span& object) {
    this->array.assign(object.array.begin(), object.array.end());
    return *this;
}

Span::Span(const Span& object) {
    this->array.assign(object.array.begin(), object.array.end());
}

void Span::addNumber(int const number) {
    if (this->array.capacity() == this->array.size())
        throw ErrorSizeException();
    this->array.push_back(number);
}

int Span::longestSpan() const {
    std::vector<int> tmp;
    if (this->array.size() <= 1) {
        throw ErrorSizeException();
    }

    tmp.assign(array.begin(), array.end());

    std::sort(tmp.begin(), tmp.end());
    int result = tmp[tmp.size() - 1] - tmp[0];

    return result;
}

int Span::shortestSpan() const {
    std::vector<int> tmp;
    if (this->array.size() <= 1) {
        throw ErrorSizeException();
    }

    tmp.assign(array.begin(), array.end());

    int result = tmp[tmp.size() - 1];
    std::sort(tmp.begin(), tmp.end());

    for (unsigned long i = 0; i < tmp.size() - 1; i++) {
        int tmpResult = tmp[i + 1] - tmp[i];
        if (tmpResult < result)
            result = tmpResult;
    }
    return result;
}

void Span::fillArray(int const N) {
    this->array.resize(N, 0);

    for (std::vector<int>::iterator it = array.begin(); it < array.end(); it++) {
        if (!*it)
            *it = rand() % N;
    }
}

void Span::printArray() {
    for (std::vector<int>::iterator it = array.begin(); it < array.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}