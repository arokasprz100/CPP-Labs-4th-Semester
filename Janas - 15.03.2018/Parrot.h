#ifndef Parrot_h
#define Parrot_h

#include "Animal.h" /// inheritance
#include <string> /// for std::string

/// Class representing type of animal - a parrot
/// Parrot can have a name and age (age is inherited 
/// from class Animal). Parrot is a special kind of animal
/// - when user calls some of its methods, parrot repeats its
/// name
class Parrot : public Animal {
public:

	/// Parrot constructor. First argument represents
	/// age of created parrot, second argument represents
	/// parrots name - parrot will repeat it when some other
	/// methods are called.
	/// This constructor prints text on the standard output - it
	/// prints word Parrot: and then parrots name, like this:
	/// Parrot: <parrot_name>
	/// Additional text is printed before this one, because this
	/// constructor calls constructor of base class Animal
	Parrot(unsigned age, std::string name);

	/// Method that makes parrot say something
	/// Prints text on the standard output
	/// Text format is like this:
	/// Parrot: <name>. <name>!
	/// This method does not change object, so
	/// it can be used on const objects
	void saySomething() const;

	/// Help method that prints text on the
	/// standard output
	/// This method is used by Zoo to print
	/// data of all animals in it
	/// Format of output:
	/// Animal with age <age>, Parrot: <name>
	/// This method can be called on const objects
	void print() const;

	/// Parrot destructor - it is called upon destroying 
	/// object that is an instance of a Parrot
	/// This destructor prints text on standard output, like this:
	/// Bye Parrot
	~Parrot();

private:
	/// Field representing parrots name
	/// Parrot receives its name during creation
	std::string m_name;

};



#endif