/* Task: Algorytmy 
 * Executable file: ale_fajne_algorytmy 
 * Description: 
 * 
 * Zadanie bedzie polegalo na napisaniu kilku podstawowych algorytmow:
 * 1. print_range
 * 2. accumulate
 * 3. count_val
 * 4. check_any/check_all
 * 5. for_each
 * 6. buble_sort (przypominam implementacje:)

// for ( i = 0; i < N; i++ )
//    for (j = i+1; j < N; ++j ) 
//       if ( porownanie(tablica[i], tablica[j]) )
//          swap( tablica[i], tablica[j] )
//
// Do podmiany zawartości dwóch iteratorów należy użyć 
// std::iter_swap(it, jt) z biblioteki <iterator>

 * Algorytmy te mają działać głównie na kontenerach STL, a dokładniej na
 * wszystkich kontenerach które udostępniają odpowiednie iteratory.
 * 
 * Z oczywistych względów korzystanie z biblioteki <algorithm> jest 
 * zabronione. W trakcie rozwiązywania zadania nie wolno korzystać
 * z internetu, notatek etc.
 * 
 */ 

#include "main.h"

#include <vector>
#include <list>
#include <set>

#include <string>
#include <iostream>
#include <iomanip>

bool test_less_12(double x){
    return x < 12.0;
}

bool test_odd(int x){
    return x%2;
}

void modify_add_last(std::string & name){
    name += " Kowalska";
}

int main(){ 
    
    // Przygotowanie kontenerów
    std::string arr_lis[] = { "Julia", "Zuzanna", "Zofia", "Julia", "Maja" };
    std::list< std::string > my_lis(arr_lis, arr_lis+5);
    double arr_vec[] = { 5.1, 4.2, 3.3, 2.4, 1.5 };
    std::vector<double> my_vec(arr_vec, arr_vec+5);
    // Uwaga, wektor jest stały!
    const int arr_set[] = { 10, 11, 12, 13, 14, 15};
    const std::set<int> my_set(arr_set, arr_set+6);

    std::cout << "****************************************************" << std::endl;
    std::cout << "Wypisywanie zakresu" << std::endl;
    
    std::cout << "my_lis = "; algorithm::print_range( my_lis.begin(), my_lis.end() ); std::cout << std::endl;
    std::cout << "my_vec = "; algorithm::print_range( my_vec.begin(), my_vec.end() ); std::cout << std::endl;
    std::cout << "my_set = "; algorithm::print_range( my_set.begin(), my_set.end() ); std::cout << std::endl;
    
    std::cout << "****************************************************" << std::endl;
    std::cout << "Sumowanie" << std::endl;
    
    std::string sum_lis = "Imiona:";
    algorithm::accumulate( my_lis.begin(), my_lis.end(), sum_lis );
    std::cout << "sum_lis = " << sum_lis << std::endl;
    
    double sum_vec = 0.0;
    algorithm::accumulate( my_vec.begin(), my_vec.end(), sum_vec );
    std::cout << "sum_vec = " << sum_vec << std::endl;
    
    int sum_set = 0;
    algorithm::accumulate( my_set.begin(), my_set.end(), sum_set );
    std::cout << "sum_set = " << sum_set << std::endl;
    
    std::cout << "****************************************************" << std::endl;
    std::cout << "Zliczanie" << std::endl;
    
    std::cout << " \"Julia\" in my_lis : " << algorithm::count_val( my_lis.begin(), my_lis.end(), "Julia" ) << " times " << std::endl;
    std::cout << " 0.0 in my_vec : " << algorithm::count_val( my_vec.begin(), my_vec.end(), 10 ) << " times " << std::endl;
    std::cout << " 10 in my_set : " << algorithm::count_val( my_set.begin(), my_set.end(), 10 ) << " times " << std::endl;
  
    std::cout << "****************************************************" << std::endl;
    std::cout << "Testowanie" << std::endl;
    
    std::cout << "all in my_vec less than 12 = " << std::boolalpha << algorithm::check_all( my_vec.begin(), my_vec.end(), test_less_12 ) << std::endl;
    std::cout << "all in my_set less than 12 = " << std::boolalpha << algorithm::check_all( my_set.begin(), my_set.end(), test_less_12 ) << std::endl;
    std::cout << "any in my_set odd = " << std::boolalpha << algorithm::check_any( my_set.begin(), my_set.end(), test_odd ) << std::endl;
    std::cout << "all in my_set odd = " << std::boolalpha << algorithm::check_all( my_set.begin(), my_set.end(), test_odd ) << std::endl;
    
    std::cout << "****************************************************" << std::endl;  
    std::cout << "Modyfikacja" << std::endl;
    
    std::cout << "my_lis = "; algorithm::print_range( my_lis.begin(), my_lis.end() ); std::cout << std::endl;
    algorithm::for_each( my_lis.begin(), my_lis.end(), modify_add_last );
    std::cout << "my_lis = "; algorithm::print_range( my_lis.begin(), my_lis.end() ); std::cout << std::endl;
    
    std::cout << "****************************************************" << std::endl;  
    std::cout << "Sortowanie" << std::endl;

    std::cout << "my_vec = "; algorithm::print_range( my_vec.begin(), my_vec.end() ); std::cout << std::endl;      
    algorithm::buble_sort( my_vec.begin(), my_vec.begin()+3 );
    std::cout << "my_vec = "; algorithm::print_range( my_vec.begin(), my_vec.end() ); std::cout << std::endl;   
    algorithm::buble_sort( my_vec.begin()+3, my_vec.end() );
    std::cout << "my_vec = "; algorithm::print_range( my_vec.begin(), my_vec.end() ); std::cout << std::endl;   
    algorithm::buble_sort( my_vec.begin(), my_vec.end() );
    std::cout << "my_vec = "; algorithm::print_range( my_vec.begin(), my_vec.end() ); std::cout << std::endl;
    
    algorithm::buble_sort( my_lis.begin(), my_lis.end() );
    std::cout << "my_lis = "; algorithm::print_range( my_lis.begin(), my_lis.end() ); std::cout << std::endl;

    std::cout << "****************************************************" << std::endl;  
    return 0;
}

/* Output: 
****************************************************
Wypisywanie zakresu
my_lis = { "Julia" , "Zuzanna" , "Zofia" , "Julia" , "Maja" }
my_vec = { "5.1" , "4.2" , "3.3" , "2.4" , "1.5" }
my_set = { "10" , "11" , "12" , "13" , "14" , "15" }
****************************************************
Sumowanie
sum_lis = Imiona:JuliaZuzannaZofiaJuliaMaja
sum_vec = 16.5
sum_set = 75
****************************************************
Zliczanie
 "Julia" in my_lis : 2 times 
 0.0 in my_vec : 0 times 
 10 in my_set : 1 times 
****************************************************
Testowanie
all in my_vec less than 12 = true
all in my_set less than 12 = false
any in my_set odd = true
all in my_set odd = false
****************************************************
Modyfikacja
my_lis = { "Julia" , "Zuzanna" , "Zofia" , "Julia" , "Maja" }
my_lis = { "Julia Kowalska" , "Zuzanna Kowalska" , "Zofia Kowalska" , "Julia Kowalska" , "Maja Kowalska" }
****************************************************
Sortowanie
my_vec = { "5.1" , "4.2" , "3.3" , "2.4" , "1.5" }
my_vec = { "3.3" , "4.2" , "5.1" , "2.4" , "1.5" }
my_vec = { "3.3" , "4.2" , "5.1" , "1.5" , "2.4" }
my_vec = { "1.5" , "2.4" , "3.3" , "4.2" , "5.1" }
my_lis = { "Julia Kowalska" , "Julia Kowalska" , "Maja Kowalska" , "Zofia Kowalska" , "Zuzanna Kowalska" }
****************************************************
*/ 
