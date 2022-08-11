#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

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

void Bureaucrat::signForm(Form& object) {
    try {
        object.beSigned(*this);
    } catch (const std::exception& ex) {
        std::cout << this->name << " cannot sign form " << object.getName() << ", because "
        << ex.what() << "\n" << std::endl;
        return;
    }
    std::cout << this->name << " sign form " << object.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &object) {
    out << object.getName() << " bureaucrat grade " << object.getGrade() << std::endl;
    return out;
}

void Bureaucrat::executeForm(Form const& form) {
    try {
        form.execute(*this);
        std::cout << GREEN << this->name << " executed " << 
            form.getName() << " form " << END << std::endl;
    } catch (const std::exception& ex) {
        std::cout << RED << ex.what() << END << std::endl;
    }
}