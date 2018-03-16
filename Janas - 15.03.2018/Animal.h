#ifndef Animal_h
#define Animal_h

/// Class representing animal
/// This is not abstract class, but creating
/// its instance on its own is useless
/// It stores animal age
/// Its base class for hierarchy implemented here
class Animal{
public:

	/// Constructor of class Animal - it takes
	/// animals age 
	/// It prints text on standard output, that is
	/// used by classed derived form this class
	Animal(unsigned age);

	/// Virtual function, does nothing, used
	/// to call saySomething() on derived objects
	virtual void  saySomething() const {};

	/// Virtual function, does nothing, used
	/// to call print() on derived objects
	virtual void print() const {};

	/// Virtual destructor, does nothing
	virtual ~Animal() {}


protected:
	/// This field stored animals age
	unsigned m_age;

};



#endif