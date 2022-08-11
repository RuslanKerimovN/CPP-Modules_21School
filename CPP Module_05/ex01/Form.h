#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.h"
class Bureaucrat;

class Form {
    public:
        Form(std::string name, int sign, int execute);
        ~Form();
        Form(const Form& object);
        Form& operator=(Form const& object);

        const std::string getName() const;
        bool getsignForm();
        int  getSign() const;
        int     getExecute() const;
        void setSignForm();
        void beSigned(Bureaucrat const& object);

        class GradeTooHighException : public std::exception {
            const char* what() const throw() {
                return  "Class Form more than allowed";
            }
        };

        class GradeTooLowException : public std::exception {
            const char* what() const throw() {
                return  "Class Form less than allowed";
            }
        };

    private:
        std::string const name;
        bool signForm;
        int const sign;
        int const execute;
};

std::ostream &operator<<(std::ostream &out, Form &object);

#endif
