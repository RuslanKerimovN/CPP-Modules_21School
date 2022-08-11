#include "Form.h"

Form::Form(std::string name, int sign, int execute)
    : name(name), sign(sign), execute(execute) {
    if (sign > 150 || execute > 150)
        throw GradeTooLowException();
    else if (sign < 1 || execute < 1)
        throw GradeTooHighException();
    this->signForm = false;
    std::cout << "Form " << name << " called" << std::endl;
}

Form::~Form() {
    std::cout << "Destructor " << this->name << " called" << std::endl;
}

Form::Form(const Form &object) :
    name(object.name), signForm(object.signForm), sign(object.sign),
        execute(object.execute) {
}

Form& Form::operator=(Form const& object) {
    this->signForm = object.signForm;
    return *this;
}

const std::string Form::getName() const {
    return this->name;
}

bool Form::getsignForm() {
    return this->signForm;
}

int  Form::getSign() const {
    return this->sign;
}

int Form::getExecute() const {
    return this->execute;
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
    out << "<<THIS IS FORM>>"
    << "\nName form is - " << object.getName()
    << "\nStatus form is - " << object.getsignForm()
    << "\nThis form can sign who more or equal - " << object.getSign()
    << "\nThis form can do who more or equal - " << object.getExecute() 
    << "\n--------------------------------------------------------------------" << std::endl;
    return out;
}