#ifndef my_algorithm_h
#define my_algorithm_h

#include <iostream> /// std::cout 
#include <iterator>

/// Namespace prividing simple algorithms implementations
/// that mimic to ones in STL <algorithm> header.
/// These algorithms work on iterators.
namespace algorithm
{

	/// Function template that implements printing values from
	/// given range to standard output. Format is as follows:
	/// { <elem_1> , <elem_2> , ... <elem_n> }
	/// First argument represents iterator pointing at the 
	/// begining of range, second one points behind the last 
	/// element in range (like in STL algorithms)
	template<typename iterator>
	void print_range(iterator begin, const iterator end);

	/// This function accumulates elements form given range
	/// so it uses operator += - it should be provided for
	/// given type. This algorithm returns result of such 
	/// accumulation, written in a variable passed as reference
	/// in this argument. First argument represents iterator 
	/// pointing at the begining of range, second one points 
	/// behind the last element in range (like in STL algorithms)
	template<typename iterator, typename U>
	U accumulate(iterator begin, const iterator end, U& list);

	/// This function template is used to provide function
	/// that counts how many elements in given range are
	/// equal to argument val. It returns type int with
	/// number of such elements. 
	template<typename iterator, typename U>
	int count_val(iterator begin, const iterator end, const U& val);

	/// This function template is used to provide function
	/// that checks if condition given in fun is
	/// true for all elements. If it is true for all
	/// elements, it returns true, otherwise false.
	/// Condition to check if given as a function pointer
	/// (function should return bool - for checking)
	template<typename iterator, typename U>
	bool check_all(iterator begin, const iterator end, bool (*fun)(U val));

	/// This function template is used to privide function
	/// that checks if any element in given range returns
	/// true for condition given as function pointer fun.
	/// If fun returns true for any element in range
	/// check_any also returns true. Otherwise it returns 
	/// false.
	template<typename iterator, typename U>
	bool check_any(iterator begin, const iterator end, bool (*fun)(U val));

	/// This function template iterates over range of 
	/// elements [begin, end) and calls function
	/// fun, using value from range as its argument
	template<typename iterator, typename U>
	void for_each(iterator begin, const iterator end, void (*fun)(U val));

	/// This function template provides simple
	/// implementation of buble_sort algoritm
	/// - it sorts elements in range [begin, end)
	/// using operator > for comparision - this 
	/// operator has to be provided in order 
	/// for this function to work.
	template <typename T>
	void buble_sort(T begin, T end);
}





//////////////////////////////////
//// Implementations /////////////
//////////////////////////////////


template<typename iterator>
void algorithm::print_range(iterator begin, const iterator end)
{
	std::cout << "{";
	std::string separator = "";
	for (iterator it = begin; it != end; ++it){
		std::cout << separator << " \"" << *it << "\" ";
		separator = ",";
	}
	std::cout << "}";
}


template<typename iterator, typename U>
U algorithm::accumulate(iterator begin, const iterator end, U& list)
{
	for (; begin != end; ++begin)
		list += *begin;
	return list;
}


template<typename iterator, typename U>
int algorithm::count_val(iterator begin, const iterator end, const U& val)
{
	int counter = 0;
	for (; begin != end; ++begin)
		if (*begin == val)
			++counter;
	return counter;
}


template<typename iterator, typename U>
bool algorithm::check_all(iterator begin, const iterator end, bool (*fun)(U val))
{
	for (; begin != end; ++begin)
		if (!fun(*begin))
			return false;
	return true;
}


template<typename iterator, typename U>
bool algorithm::check_any(iterator begin, const iterator end, bool (*fun)(U val))
{
	for (; begin != end; ++begin)
		if (fun(*begin))
			return true;
	return false;
}


template<typename iterator, typename U>
void algorithm::for_each(iterator begin, const iterator end, void (*fun)(U val))
{
	for (; begin != end; ++begin)
		fun(*begin);

}


template <typename iterator>
void algorithm::buble_sort(iterator begin, const iterator end)
{
	for (; begin != end; ++begin)
	{
		iterator middle = begin;
		++middle;
		for (; middle != end; ++middle )
			if (*begin > * middle)
				std::iter_swap(begin, middle);
	}
}

#endif