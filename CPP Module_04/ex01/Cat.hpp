#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& object);
		Cat& operator=(const Cat& object);
		virtual ~Cat();
		virtual void	makeSound() const;
		void writeMind() const;
	private:
		Brain* brain;
};

#endif
