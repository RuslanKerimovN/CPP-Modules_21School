#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& object) {
	std::cout << "Copy animal constructor called" << std::endl;
	*this = object;
}

Animal& Animal::operator=(const Animal& object) {
	std::cout << "Copy animal \"operator\" constructor called" << std::endl;
	this->type = object.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const {
	return this->type;
}
