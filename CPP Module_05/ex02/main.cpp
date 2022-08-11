#include "Bureaucrat.h"
#include "Form.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main() {

    Bureaucrat Viktor("Viktor", 80);
    Bureaucrat Semen("Semen", 15);
    Bureaucrat Petr("Petr", 1);

    std::cout << GREEN << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MAKE FORM" <<
        "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n" << END <<std::endl;
    ShrubberyCreationForm Shrubbery("OrderShurbbery");
    RobotomyRequestForm Robotomy("OrderRobotomy");
    PresidentialPardonForm President("OrderPresident");

    std::cout << Shrubbery;
    std::cout << Robotomy;
    std::cout << President;

    Viktor.executeForm(Shrubbery);
    Petr.signForm(Shrubbery);
    Viktor.executeForm(Shrubbery);

    Petr.signForm(Robotomy);
    Viktor.executeForm(Robotomy);
    Semen.executeForm(Robotomy);

    std::cout << Shrubbery;
    std::cout << Robotomy;

    return 0;
}