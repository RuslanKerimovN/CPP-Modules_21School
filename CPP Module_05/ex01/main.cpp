#include "Bureaucrat.h"
#include "Form.h"

int main() {

    Bureaucrat Viktor("Viktor", 80);
    Bureaucrat Jack("Jack", 150);
    Bureaucrat Petr("Petr", 1);

    Form order1("Order1", 100, 50);
    Form order2("Order2", 30, 50);
    std::cout << order1;
    std::cout << order1;
    
    Viktor.signForm(order1);
    std::cout << order1;

    Viktor.signForm(order2);
    std::cout << order2;

    try {
        Form order("Order", 160, 160);
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        Form order3("Order3", 0, 0);
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}