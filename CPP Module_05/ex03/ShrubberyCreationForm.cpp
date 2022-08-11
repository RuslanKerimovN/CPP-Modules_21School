#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : 
    Form("ShrubberyCreationForm", 145, 137), target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& object) : 
    Form("ShrubberyCreationForm", 145, 137), target(object.target) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& object) {
    this->target = object.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    if (executor.getGrade() > this->getExecute())
        throw GradeTooHighException();
    if (!getSignForm())
        throw NotSignedException();
    std::ofstream fout(target + "_shrubbery");
    fout << "██████████████████████████\n" << 
            "▌════════════════════════▐\n" <<
            "▌══▄▄▓█████▓▄═════▄▄▓█▓▄═▐\n" << 
            "▌═▄▓▀▀▀██████▓▄═▄▓█████▓▌▐\n" <<
            "▌═══════▄▓███████████▓▀▀▓▐\n" << 
            "▌═══▄▓█████████▓████▓▄═══▐\n" <<
            "▌═▄▓████▓███▓█████████▓▄═▐\n" <<
            "▌▐▓██▓▓▀▀▓▓███████▓▓▀▓█▓▄▐\n" <<
            "▌▓▀▀════▄▓██▓██████▓▄═▀▓█▐\n" <<
            "▌══════▓██▓▀═██═▀▓██▓▄══▀▐\n" <<
            "▌═════▄███▀═▐█▌═══▀▓█▓▌══▐\n" << 
            "▌════▐▓██▓══██▌═════▓▓█══▐\n" <<
            "▌════▐▓█▓══▐██═══════▀▓▌═▐\n" <<
            "▌═════▓█▀══██▌════════▀══▐\n" <<
            "▌══════▀═══██▌═══════════▐\n" <<
            "▌═════════▐██▌═══════════▐\n" <<
            "▌═════════▐██════════════▐\n" <<
            "▌═════════███════════════▐\n" <<
            "▌═════════███════════════▐\n" <<
            "▌════════▐██▌════════════▐\n" <<
            "▌▓▓▓▓▓▓▓▓▐██▌▓▓▓▓▓▓▓▓▓▓▓▓▐\n" <<
            "▌▓▓▓▓▓▓▓▓▐██▌▓▓▓▓▓▓▓▓▓▓▓▓▐\n" <<
            "▌▓▓▓▓▓▄▄██████▄▄▄▓▓▓▓▓▓▓▓▐\n"<<
            "██████████████████████████" << std::endl;
}