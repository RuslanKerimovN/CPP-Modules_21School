#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "Form.h"
#define GREEN	"\033[0;32m"
#define END     "\033[0m"
#define RED		"\033[0;31m"

class Form;

class Bureaucrat {
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& object);
    Bureaucrat& operator=(Bureaucrat const& object);
    const std::string getName() const;
    int getGrade() const;
    void setGradeUp();
    void setGradeDown();
    void signForm(Form& object);
    void executeForm(Form const& form);

    class GradeTooHighException : public std::exception {
        const char* what() const throw() {
            return  "Class Bureaucrat more than allowed";
        }
    };

    class GradeTooLowException : public std::exception {
        const char* what() const throw() {
            return  "Class Bureaucrat less than allowed";
        }
    };

private:
    std::string const name;
    int grade;

};

std::ostream &operator<<(std::ostream &out, Bureaucrat &object);

#endif
