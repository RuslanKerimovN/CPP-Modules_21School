#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	this->brain->setIdeas("I am the cats mind");
}

Cat::Cat(const Cat& object) {
	std::cout << "Copy cat constructor called" << std::endl;
	*this = object;
}

Cat& Cat::operator=(const Cat& object) {
	std::cout << "Copy cat \"operator\" constructor called" << std::endl;
	this->type = object.type;
	this->brain = new Brain(*object.brain);
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound() const {
	std::cout << "Cat make sound meow-meow" << std::endl;
}

void Cat::writeMind() const {
	brain->printIdeas();
}