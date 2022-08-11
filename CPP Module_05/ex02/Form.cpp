#include "Form.h"

Form::Form(std::string name, int sign, int _execute)
    : name(name), sign(sign), _execute(_execute) {
    if (sign > 150 || _execute > 150)
        throw GradeTooLowException();
    else if (sign < 1 || _execute < 1)
        throw GradeTooHighException();
    this->signForm = false;
}

Form::~Form() {}

Form::Form(const Form &object) :
    name(object.name), signForm(object.signForm), sign(object.sign),
        _execute(object._execute) {
}

Form& Form::operator=(Form const& object) {
    this->signForm = object.signForm;
    return *this;
}

const std::string Form::getName() const {
    return this->name;
}

bool Form::getSignForm() const {
    return this->signForm;
}

int  Form::getSign() const {
    return this->sign;
}

int Form::getExecute() const {
    return this->_execute;
}

void Form::setSignForm() {
    if (!this->signForm)
        this->signForm = true;
}

void Form::beSigned(Bureaucrat const& object) {
    if (object.getGrade() <= this->sign)
        setSignForm();
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form &object) {
    out << "<<<<<<<<<<<<<<<<<<<<<<<<<THIS IS FORM>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"
    << "\nName form is - " << object.getName()
    << "\nStatus form is - " << object.getSignForm()
    << "\nThis form can sign who more or equal - " << object.getSign()
    << "\nThis form can do who more or equal - " << object.getExecute() 
    << "\n--------------------------------------------------------------------" << std::endl;
    return out;
}