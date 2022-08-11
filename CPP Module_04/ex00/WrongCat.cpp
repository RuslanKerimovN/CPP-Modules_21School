#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& object) {
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = object;
}

WrongCat& WrongCat::operator=(const WrongCat& object) {
	std::cout << "Copy WrongCat \"operator\" constructor called" << std::endl;
	this->type = object.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat make sound meow-meow" << std::endl;
}