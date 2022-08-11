#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	this->brain->setIdeas("I am the dogs mind");
}

Dog::Dog(const Dog& object) {
	std::cout << "Copy dog constructor called" << std::endl;
	*this = object;
}

Dog& Dog::operator=(const Dog& object) {
	std::cout << "Copy dog \"operator\" constructor called" << std::endl;
	this->type = object.type;
	this->brain = new Brain(*object.brain);
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void	Dog::makeSound() const {
	std::cout << "Dog make sound woof-woof" << std::endl;
}

void Dog::writeMind() const {
	brain->printIdeas();
}