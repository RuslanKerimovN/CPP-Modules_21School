#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.h"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(const ShrubberyCreationForm& object);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& object);
        virtual void execute(Bureaucrat const& executor) const;
        virtual ~ShrubberyCreationForm();
    private:
        std::string target;
    };

#endif