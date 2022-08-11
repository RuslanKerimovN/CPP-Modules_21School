#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string type) {
	std::cout << "Cat " << type << "constructor called" << std::endl;
	this->type = type;
}

Cat::Cat(const Cat& object) {
	std::cout << "Copy cat constructor called" << std::endl;
	*this = object;
}

Cat& Cat::operator=(const Cat& object) {
	std::cout << "Copy cat \"operator\" constructor called" << std::endl;
	this->type = object.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Cat make sound meow-meow" << std::endl;
}