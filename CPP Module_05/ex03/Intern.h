#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.h"

class Intern {
    public:
        Intern();
        ~Intern();
        Intern(const Intern& object);
        Intern& operator=(Intern const& object);
        Form* makeForm(std::string nameForm, std::string target);
        Form* shrubbery(std::string target);
        Form* robotomy(std::string target);
        Form* presidental(std::string target);
};

std::ostream &operator<<(std::ostream &out, Form &object);

#endif