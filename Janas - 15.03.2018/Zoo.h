#ifndef Zoo_h
#define Zoo_h

#include "Animal.h" /// Zoo can store animals
#include <string> /// std::string

/// Class representing Zoo
/// Zoo can store objects of type Animal
class Zoo{
public:

	/// Constructor of object representing Zoo
	/// It takes zoo name and number of animals that
	/// can be stored in Zoo 
	/// This function alocates memory via new[] operator
	/// This memory is deleted by Zoo destructor
	Zoo(std::string name, unsigned cap);

	/// This method prints information about Zoo - its name
	/// and list of all stored animals
	/// If place for animal is empty, information about
	/// that is printed
	void print() const;

	/// Method that inserts Animal to Zoo
	/// It takes index of array that stores animals
	/// If place under this index is not free, method
	/// returns pointer to added Animal
	/// Otherwise, it returns 0
	Animal* insert(unsigned place, Animal* inserted);

	/// Method that inserts Animal at first possible place
	/// If there is no place, it returns pointer to added Animal
	/// Otherwise, it returns 0
	Animal* insert(Animal* inserted);

	/// Method that removes Animal from Zoo
	/// Its argument represents index of animal to be
	/// removed. Removed Animal is returned by this function
	/// If there is no Animal, 0 is returned
	Animal* remove (unsigned place);

	/// Method that changes size of Zoo if it is possible 
	/// (if given number of places can store all animals in Zoo)
	/// It prints message on standard output about the operation
	void reorganize(unsigned newNumber);

	/// Method that returns number of animals in Zoo
	unsigned numOfAnimals() const;

	/// Zoo destructor - it deletes all Animals in Zoo
	/// and array of Animals
	/// it prints text
	~Zoo();

private:
	/// This field stored name od Zoo
	std::string m_name;

	/// This filed stores array of pointers to animals
	Animal ** m_storedAnimals;

	/// This filed reperesents all places for animals in Zoo
	unsigned m_allPlaces;

	/// This filed represents current number of animals in Zoo 
	unsigned m_numberOfStored;

};



#endif