#ifndef Value_h
#define Value_h

#include <iostream> /// std::cout, std::endl

/// Class representing value. Value can have it's name and numerical value
/// Values are created by factory
class Value
{
public:
	/// Simple constructor. Sets all fields and prints message about
	/// creation of object
	Value(std::string name, double value):
		m_name(name), m_value(value) 
	{
		std::cout<<"Manufacturing value "<<m_value<<std::endl;
	}

	/// Function used to print information about value
	void Print() const;

	/// Simple getter. Returns name of Value
	std::string GetName() const {return m_name;}

	/// Simple getter. Returns numerical value of Value
	double GetValue() const {return m_value;}

	/// Destructor. Prints message about destruction of object.
	/// It's does not do anything else 
	~Value();

private:
	/// This field stores Value name
	std::string m_name;

	/// Field that stores numerical value of Value
	double m_value;


};

#endif