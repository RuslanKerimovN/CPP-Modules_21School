#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog& object);
		Dog& operator=(const Dog& object);
		virtual ~Dog();
		virtual void	makeSound() const;
};

#endif
