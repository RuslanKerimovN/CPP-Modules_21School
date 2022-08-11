#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.h"
class Bureaucrat;

class Form {
    public:
        Form(std::string name, int sign, int execute);
        virtual ~Form();
        Form(const Form& object);
        Form& operator=(Form const& object);

        const std::string getName() const;
        bool getSignForm() const;
        int  getSign() const;
        int     getExecute() const;
        void setSignForm();
        void beSigned(Bureaucrat const& object);
        virtual void execute(Bureaucrat const& executor) const = 0;

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

        class NotSignedException : public std::exception {
            const char* what() const throw() {
                return  "Form cannot will be maked, becouse she not was signed";
            }
        };
    private:
        std::string const name;
        bool signForm;
        int const sign;
        int const _execute;
};

std::ostream &operator<<(std::ostream &out, Form &object);

#endif
