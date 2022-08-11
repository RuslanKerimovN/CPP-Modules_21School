#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& object) {
    std::cout << "Brain copy operator called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = object.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& object) {
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i <  100; i++) {
        this->ideas[i] = object.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdeas(std::string str) {
    for (int i = 0; i < 100; i++) {
        ideas[i] = str;
    }
}

void Brain::printIdeas() const {
    for (int i = 0; i < 100; i++) {
        std::cout << (i + 1) << ") " << ideas[i] << std::endl;
    }
}