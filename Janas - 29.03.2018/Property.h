#ifndef Property_h
#define Property_h

#include <iostream> /// std::ostream


/// Base class of Property hierarchy
/// It stores nothing
class Property
{
public:
	/// This function prints EMPTY to stream
	virtual void print(std::ostream& stream) const;

	/// This function clones instance of Property
	/// Allocates memory and returns pointer to clone
	virtual Property* clone() const;
	
	/// Virtual destructor, does nothing
	virtual ~Property() {}

};

/// Overloaded << operator. Used to print object of type Property to stream
/// It uses functions from Property class hierarchy
std::ostream& operator << (std::ostream& stream, const Property& printed);

/// Class derived from Property class
/// It stores one int number
class Property_Int : public Property 
{
public:
	/// Constructor, sets stored data according to given argument
	Property_Int(int data):
		m_data(data) {}

	/// Calculates modulo of stored data (m_data % value)
	/// It modyfies instance it was called on
	void modulo (int value);

	/// Prints stored value with its type - "i" in this case
	virtual void print(std::ostream& stream) const;

	/// Allocates memory for new Property_Int object and returns pointer
	/// to it. It clones class instance it was called on
	virtual Property* clone() const;

	/// Destructor, does nothing
	~Property_Int() {}

private:
	int m_data; /// stored data

};

class Property_Float : public Property 
{
public:
	/// Constructor, sets stored data according to given argument
	Property_Float(float data):
		m_data(data) {}

	/// Calculates inverse of stored data. It modyfies instance of 
	/// Property_Float it was called on
	void inverse();

	/// Prints stored value with its type - "f" in this case - to stream
	virtual void print(std::ostream& stream) const;

	/// Allocates memory for new Property_Float object and returns pointer
	/// to it. It clones class instance it was called ons
	virtual Property* clone() const;

	/// Destructor, does nothing
	~Property_Float() {}

private:
	float m_data; /// stored data

};




#endif