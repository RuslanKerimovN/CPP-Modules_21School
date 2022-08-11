#include "Bureaucrat.h"

int main() {

    Bureaucrat Viktor("Viktor", 80);
    Bureaucrat Jack("Jack", 150);
    Bureaucrat Petr("Petr", 1);

    std::cout << "\nTest stream Bureaucrat\n" << std::endl;

    std::cout << Viktor;
    std::cout << Jack;
    std::cout << Petr;

    try {
        Jack.setGradeDown();
    } catch (const std::exception& ex) {
        std::cout << "<<JACK THROW EXCEPTION>>\n"<< ex.what() << std::endl;
    }

    try {
        Petr.setGradeUp();
    } catch (const std::exception& ex) {
        std::cout << "<<PETR THROW EXCEPTION>>\n" << ex.what() << std::endl;
    }

    std::cout << Viktor;
    Viktor.setGradeUp();
    std::cout << Viktor;
    Viktor.setGradeDown();
    std::cout << Viktor;

    try {
        Bureaucrat Fedor("Fedor", 180);
    } catch (const std::exception& ex) {
        std::cout << "<<FEDOR THROW EXCEPTION>>\n" << ex.what() << std::endl;
    }

    try {
        Bureaucrat Fedor("Fedor", 0);
    } catch (const std::exception& ex) {
        std::cout << "<<FEDOR THROW EXCEPTION>>\n" << ex.what() << std::endl;
    }

    return 0;
}