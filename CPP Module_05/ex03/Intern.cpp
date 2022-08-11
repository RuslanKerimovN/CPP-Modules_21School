#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& object) {
    (void)object;
}

Intern& Intern::operator=(Intern const& object) {
    (void)object;
    return *this;
}

Form* Intern::shrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

Form* Intern::robotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

Form* Intern::presidental(std::string target) {
    return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string nameForm, std::string target) {
    int i = 0;
    std::string mass[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    typedef Form* (Intern::*func)(std::string target);
    func array[3] = { &Intern::shrubbery, &Intern::robotomy, &Intern::presidental };

    while (i < 3 && nameForm != mass[i])
        i++;
    
    switch (i)
    {
        case 0:
            std::cout << "Intern make form " << mass[i] << " with target " << target << std::endl;
            return (this->*array[0])(target);
            break;
        case 1:
            std::cout << "Intern make form " << mass[i] << " with target " << target << std::endl;
            return (this->*array[1])(target);
            break;
        case 2:
            std::cout << "Intern make form " << mass[i] << " with target " << target << std::endl;
            return (this->*array[2])(target);
            break;
        case 3:
            std::cout << "Not found  form" << std::endl;
            break;
        default:
            break;
    }
    return 0;
}
