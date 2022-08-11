#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


class Span
{
    public:
        Span(int N);
        Span(const Span& object);
        Span& operator=(const Span& object);
        ~Span();
        void addNumber(int const number);
        int shortestSpan() const;
        int longestSpan() const;
        void fillArray(int const N);
        void printArray();

        class ErrorSizeException : public std::exception {
            const char* what() const throw() {
                return "Array cannot make this action!";
            }
        };
    private:
        std::vector<int> array;
};

#endif