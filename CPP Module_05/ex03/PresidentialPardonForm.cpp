#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : 
    Form("PresidentialPardonForm", 25, 5), target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& object) : 
    Form("PresidentialPardonForm", 25, 5), target(object.target) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& object) {
    this->target = object.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
    if (executor.getGrade() > this->getExecute())
        throw GradeTooHighException();
    if (!getSignForm())
        throw NotSignedException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}