#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

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

    class GradeTooHighException : public std::exception {
        const char* what() const throw() {
            return  "Class more than allowed";
        }
    };

    class GradeTooLowException : public std::exception {
        const char* what() const throw() {
            return  "Class less than allowed";
        }
    };

private:
    std::string const name;
    int grade;

};

std::ostream &operator<<(std::ostream &out, Bureaucrat &object);

#endif
