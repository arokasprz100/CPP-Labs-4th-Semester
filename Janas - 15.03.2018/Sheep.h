#ifndef Sheep_h
#define Sheep_h

#include "Animal.h"

/// Class reperesenting type of animal - Sheep
/// Sheep can have age (inherited from class Animal)
class Sheep : public Animal
{
public:

	/// Sheep constructor. Its first and only argument represents
	/// age of sheep. 
	/// This constructor prints text on the standard output - single
	/// word Sheep 
	/// Additional text is printed due to usage of base class constructor
	Sheep(unsigned age);

	/// Method that would make Sheep say something
	/// In this implementation, Sheep does not say
	/// anything, so this method does nothing
	/// This method can be used on const objects
	void saySomething() const {};

	/// Help method that prints text on the standard output
	/// This method is used by class Zoo to print information
	/// about all animals stored in Zoo
	/// Format of printed output:
	/// Animal with age <age>, Sheep
	/// This method can be called on const objects
	void print() const;

	/// Sheep destructor - its called upon destruction of
	/// Sheep instance. This destructor prints text on the 
	/// standard output like this:
	/// Bye Sheep
	~Sheep();

};



#endif