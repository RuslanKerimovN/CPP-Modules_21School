#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : 
    Form("RobotomyRequestForm", 72, 45), target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& object) : 
    Form("RobotomyRequestForm", 72, 45), target(object.target) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& object) {
    this->target = object.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    if (executor.getGrade() > this->getExecute())
        throw GradeTooHighException();
    if (!getSignForm())
        throw NotSignedException();
    if ((rand() % 100) < 50) {
        std::cout << "ZZZZZZZZZSSSSSRRRRRRRZZZZZZZZZZZ\n" <<
        this->target << " has been robotomized\n" << 
        "ZZZZZZZZZSSSSSRRRRRRRZZZZZZZZZZZ" << std::endl;
    } else {
        std::cout << "ZZZZZZZZZSSSSSRRRRRRRZZZZZZZZZZZ\n" <<
        this->target << " has NOT been robotomized\n" << 
        "ZZZZZZZZZSSSSSRRRRRRRZZZZZZZZZZZ" << std::endl;
    }
}