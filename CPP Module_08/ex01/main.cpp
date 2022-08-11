#include "Span.h"

int main() {

    Span mass(5);

    mass.addNumber(1);
    mass.addNumber(5);
    mass.addNumber(8);
    mass.addNumber(2);
    mass.addNumber(15);

    mass.printArray();

    try {
        mass.addNumber(50);
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    int longest = mass.longestSpan();
    std::cout << longest << std::endl;

    int shrorted = mass.shortestSpan();
    std::cout << shrorted << std::endl;

    mass.fillArray(10);
    mass.printArray();

    Span m(0);
    m.printArray();
    try {
        m.addNumber(50);
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        m.longestSpan();
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        m.shortestSpan();
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    Span m2(1);
    m2.addNumber(10);
    m2.printArray();

    try {
        m.addNumber(50);
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        m.longestSpan();
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    try {
        m.shortestSpan();
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    // m2.fillArray(100000);
    // m2.printArray();
    // int l = m2.longestSpan();
    // int s = m2.shortestSpan();
    // std::cout << l << std::endl;
    // std::cout << s << std::endl;

    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    // return 0;

    return 0;
}