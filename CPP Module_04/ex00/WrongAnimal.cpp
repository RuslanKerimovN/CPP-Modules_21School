#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& object) {
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = object;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& object) {
	std::cout << "Copy animal \"operator\" constructor called" << std::endl;
	this->type = object.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Animal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const{
	std::cout << "Make some sound" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}