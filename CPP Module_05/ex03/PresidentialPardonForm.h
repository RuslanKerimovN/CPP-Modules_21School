#ifndef PRSIDENTIALPARDONFORM_H
#define PRSIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(const PresidentialPardonForm& object);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& object);
        virtual ~PresidentialPardonForm();
        virtual void execute(Bureaucrat const& executor) const;
    private:
        std::string target;
};



#endif