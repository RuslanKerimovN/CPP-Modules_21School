#include "Bureaucrat.h"
#include "Form.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"

int main() {
    Intern intern;
    Form *work;
    work = intern.makeForm("RobotomyRequestForm", "Bender");

    std::cout << *work;
    delete work;
    return 0;
}