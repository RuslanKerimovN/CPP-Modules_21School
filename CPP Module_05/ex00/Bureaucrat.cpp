#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
    std::cout << "Bureaucrat " << name << " called" << std::endl;

}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor " << this->name << " called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &object) :
    name(object.getName()), grade(object.getGrade()) {
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& object) {
    this->grade = object.getGrade();
    return *this;
}

const std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::setGradeUp() {
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::setGradeDown() {
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &object) {
    out << object.getName() << " bureaucrat grade " << object.getGrade() << std::endl;
    return out;
}
