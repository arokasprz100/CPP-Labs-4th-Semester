#ifndef Factory_hpp
#define Factory_hpp

#include <iostream> /// std::cout, std::endl
#include <vector> /// std::vector

#include "OutOfRange.hpp"
#include "Value.hpp"

/// Class representing Factory of Values
/// Factory creates Values and stores them
/// it is responsible for clearing created objects
class Factory
{
public:
	/// Constructor. Sets class fields and prints message about object construction
	Factory(double start, double end):
		m_rangeStart(start), m_rangeEnd(end) 
	{
		std::cout<<"Build factory with range ["<<m_rangeStart<<", "<<m_rangeEnd<<"]"<<std::endl;
	}

	/// This function returns pointer to created value
	/// It uses new operator to allocate memory for this Value
	/// If Value is outside of allowed range, it throws OutOfRange
	/// exception. Otherwise, it returns pointer.
	/// Arguments represent name and value of created Value
	Value* PrepareValue(std::string name, double value);

	/// Simple getter that returns start of allowed range
	double GetRangeStart() const {return m_rangeStart;}

	/// Simple getter that returns end of allowed range
	double GetRangeEnd() const {return m_rangeEnd;}

	/// Destructor that clears all values in factory
	/// It calls delete operator on every pointer stored in
	/// factory. it also prints message about destruction of
	/// Factory object
	~Factory();

private:
	/// Start of allowed range
	double m_rangeStart;

	/// End of allowed range
	double m_rangeEnd;

	/// Stored values
	std::vector<Value*> m_valueVector;


};


#endif