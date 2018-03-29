#ifndef ProArray_h
#define ProArray_h

#include "Property.h" /// stored elements

/// Class implementing array of pointers to objects of type Property
/// (and derived). 
class ProArray
{
public:
	/// Constructor of ProArray - allocates memory for the array -its size
	/// is given by the argument. This constructor also allocates memory for all 
	/// elements in array - and makes them instances of base class Property
	/// Allocated memory is freed via destructor - used does not need to care 
	/// about it
	ProArray(unsigned size);

	/// This function adds element to array at given index
	/// Given object is cloned - object stored in array are
	/// independent from second argument given here
	/// If there is something under given index, it is deleted and
	/// new element is added
	void set (unsigned index, const Property& added);

	/// This function prints whole array
	/// Format is like this:
	/// {element_0, element_1, ...}
	void printAll();

	/// Destructor - frees memory allocated by constructor and all
	/// methods of this class
	~ProArray();

private:
	Property** m_stored; /// array of pointers to stored elements
	unsigned m_size; /// size of array
};



#endif