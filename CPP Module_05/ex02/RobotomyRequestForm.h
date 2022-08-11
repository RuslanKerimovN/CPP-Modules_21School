#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(const RobotomyRequestForm& object);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& object);
        virtual void execute(Bureaucrat const& executor) const;
        virtual ~RobotomyRequestForm();
    private:
        std::string target;
};

#endif