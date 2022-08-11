#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& object);
		Dog& operator=(const Dog& object);
		virtual ~Dog();
		virtual void	makeSound() const;
		void writeMind() const;
	private:
		Brain* brain;
};

#endif
