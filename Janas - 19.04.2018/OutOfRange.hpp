#ifndef OutOfRange_hpp
#define OutOfRange_hpp

#include <string> /// std::string
#include <iostream> // std::ostream

class Factory;
class Value;

/// Class representing custom OutOfRange exception
/// It should be thrown when user wants to create 
/// Value in factory which is outside of allowed range
class OutOfRange
{
public:
	/// Simple constructor which takes two arguments. First one represents
	/// pointer to factory that produced exception, and second one represents
	/// pointer to created Value that was out of range
	OutOfRange(Factory * toClean, Value* catched):
		m_ptrToFactory(toClean), m_ptrToValue(catched) {}

	/// Function that calls delete operator on stored Factory. It destroys factory object
	/// Cleaning Values in Factory is handled in Fsctory destructor, so this function also
	/// destroys all values in Factory
	void CleanFactory();

	/// Overloaded << operator that is user to print information about exception
	friend std::ostream& operator<<(std::ostream& stream, const OutOfRange& exception);

private:
	/// Field that stores pointer to Factory that generated exception
	Factory* m_ptrToFactory; 

	/// Field that stores pointer to Value that was out of range
	/// Used mainly to allow printing additional information about exception
	Value* m_ptrToValue;
	
};


#endif