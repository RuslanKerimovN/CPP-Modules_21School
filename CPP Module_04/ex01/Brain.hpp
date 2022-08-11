#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
            Brain();
			Brain(const Brain& object);
			Brain& operator=(const Brain& object);
            ~Brain();
            void setIdeas(std::string str);
            void printIdeas() const;
    protected:
            std::string ideas[100];
};

#endif