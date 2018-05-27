#ifndef DynArray_hpp
#define DynArray_hpp

#include <iostream>

/// Class template representing dynamic array of
/// objects of type T. Array size is const (it is set 
/// when creating object of a class). Array can store 
/// objects of any type, but only one type at once
template <typename T>
class DynArray
{
public:
	/// DynArray constructor - called upon creating array object
	/// Its first argument represents array size that will be set
	/// Second one represents array of type T (pointer to T), from where 
	/// we can copy data to created DynArray. By default this second argument 
	/// is set to equal nullptr, and if not provided, array will not be filled with
	/// elements, only memory will be allocated. Memory is freed later in DynArray
	/// destructor, so there is no need from user to delete [] anything
	DynArray(int size, const T* array = nullptr);

	/// Simple getter method that returns size of stored array
	int size() const { return m_size; }

	/// Overloaded [] operator. Returns element stored under index
	/// "index" in our DynArray. Element is returned by reference, so
	/// the stored object can be modified
	T& operator [] (int index);

	/// Simple method that returns pointer to first element in array
	/// Implementation left inside class for inline purpose
	/// This method makes it possible to use Standard Library
	/// algorithms on our DynArray<T>
	T* begin() const { return &m_storedData[0]; }

	/// Simple method that returns pointer to first element behind array
	/// Implementation left inside class for inline purpose
	/// Please note that returned element should not be dereferenced
	/// (you should not use * operator on it), because it points to
	/// place in mamory that is not allocated - only its addres should
	/// be used, mainly in iterator. 
	/// This method makes it possible to use Standard Library
	/// algorithms on our DynArray<T>
	T* end() const { return &m_storedData[m_size];}

	/// Destructor of DynArray. It handles memery management 
	/// (it calls delete [] on stored array), so user does
	/// not need to do it himself
	~DynArray() { delete [] m_storedData; }

	/// Class representing iterator that can be used to
	/// iterate through DynArray<T> object. 
	/// Most methods are left in class because 
	/// thanks to that they will be inline and they
	/// are very simple
	class Iterator
	{
	public:
		/// Constructor that takes pointer to begining of 
		/// data that we iterate over (it should be provided
		/// using begin() method).
		Iterator(T* ptr) : m_pointedData(ptr){}

		/// Simple compare operator that returns true
		/// is address stored by iterator and passed
		/// as argument are not equal
		bool operator != (const T* compared) const;

		/// Overloaded operator ++ that makes iterator
		/// point to next element in DynArray
		void operator++ (){ m_pointedData++; }

		/// Overloaded * operator, returns value currently pointed by
		/// iterator
		T& operator* () const { return *m_pointedData;}


		/// Overloaded -> operator, returns pointer currently stored by
		/// iterator
		T* operator-> () const { return m_pointedData; }

	private:
		/// Field that represents pointer iterator uses 
		T* m_pointedData;
	};

private:
	/// Field representing array size
	int m_size;

	/// Field that contains pointer to stored data (array itself)
	T * m_storedData;

};


/// Method implementation ///

template <typename T>
DynArray<T>::DynArray(int size, const T* array)
	: m_size(size)
{
	m_storedData = new T [size];
	if (array == nullptr)
		return;
	for (int i =0; i<m_size; ++i)
		m_storedData[i] = array[i];
}

template <typename T>
T& DynArray<T>::operator [] (int index)
{
	return m_storedData[index];
}

template <typename T>
bool DynArray<T>::Iterator::operator != (const T* compared) const 
{ 
	return m_pointedData != compared;
}


/// Outside function implementation ///

template <typename T>
std::ostream& operator << (std::ostream& stream, DynArray<T>& printed)
{
	stream<<"{";
	for (int i = 0; i<printed.size() - 1; ++i)
		stream<<"\""<<printed[i]<<"\""<<",";
	stream<<"\""<<printed[printed.size()-1]<<"\""<<"}";;
	return stream;
}



#endif