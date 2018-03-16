#ifndef Lion_h
#define Lion_h

#include "Animal.h" /// inheritance


/// Class representing type of animal - a lion
/// Lion can have age (age is inherited 
/// from class Animal).
class Lion : public Animal
{
public:

	/// Lion constructor. First and only argument represents
	/// age of created lion.
	/// This constructor prints text on the standard output - it
	/// prints word Lion
	/// Additional text is printed before this one, because this
	/// constructor calls constructor of base class Animal
	Lion(unsigned age);

	/// Method that makes lion say something
	/// Prints text on the standard output
	/// Text format is like this:
	/// Lion: Aghr!
	/// This method does not change object, so
	/// it can be used on const objects
	void saySomething() const;

	/// Help method that prints text on the
	/// standard output
	/// This method is used by Zoo to print
	/// data of all animals in it
	/// Format of output:
	/// Animal with age <age>, Lion
	/// This method can be called on const objects
	void print() const;

	/// Lion destructor - it is called upon destroying 
	/// object that is an instance of a Lion.
	/// This destructor prints text on standard output, like this:
	/// Bye Lion
	~Lion();

};

#endif