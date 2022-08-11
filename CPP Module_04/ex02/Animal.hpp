#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
			Animal();
			Animal(const Animal& object);
			Animal& operator=(const Animal& object);
			virtual ~Animal();
			virtual void	makeSound() const = 0;
			std::string		getType() const;
	protected:
			std::string type;
};

#endif