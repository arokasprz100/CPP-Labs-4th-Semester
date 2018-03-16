#ifndef Cow_h
#define Cow_h

#include "Animal.h" /// inheritance


/// Class representing type of animal - a cow
/// Cow can have age (age is inherited 
/// from class Animal).
class Cow : public Animal
{
public:

	/// Cow constructor. First and only argument represents
	/// age of created cow.
	/// This constructor prints text on the standard output - it
	/// prints word Cow
	/// Additional text is printed before this one, because this
	/// constructor calls constructor of base class Animal
	Cow(unsigned age);


	/// Method that makes cow say something
	/// Prints text on the standard output
	/// Text format is like this:
	/// Cow: Muuu...
	/// This method does not change object, so
	/// it can be used on const objects
	void saySomething() const;

	/// Help method that prints text on the
	/// standard output
	/// This method is used by Zoo to print
	/// data of all animals in it
	/// Format of output:
	/// Animal with age <age>, Cow
	/// This method can be called on const objects
	void print() const;

	/// Cow destructor - it is called upon destroying 
	/// object that is an instance of a Cow.
	/// This destructor prints text on standard output, like this:
	/// Bye Cow
	~Cow();


};



#endif