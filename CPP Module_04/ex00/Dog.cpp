#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type) {
	std::cout << "Dog " << type << "constructor called" << std::endl;
	this->type = type;
}

Dog::Dog(const Dog& object) {
	std::cout << "Copy dog constructor called" << std::endl;
	*this = object;
}

Dog& Dog::operator=(const Dog& object) {
	std::cout << "Copy dog \"operator\" constructor called" << std::endl;
	this->type = object.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Dog make sound woof-woof" << std::endl;
}