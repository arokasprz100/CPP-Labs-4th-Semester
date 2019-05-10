/* 
 Plik wykonywalny: out.out
 
 Celem zadania jest napisanie prostej klasy Mebel, której obiekty mają
 być w latwy sposob zapisywalne do pliku tekstowego - za pomocą operatora <<.
 
 Zapisane obiekty powinny być także w łatwy sposób (operatorem >>) z tego pliku wczytane.
 Proszę także zaimplementować wczytanie wielu obiektów z calego pliku do jednego wektora. 

 Mozna kozystac z calej dokumentacji c++ na stronach:
 http://en.cppreference.com/w/ 
 http://www.cplusplus.com/reference/
 lub podobnych. 

 Korzystanie z innych zrodel, w tym stron internetowych nie bedacych dokumentacja,
 jest scisle zabronione.

 Rozwiazanie powinno byc jak najbardziej odporne na dziwne argumenty/sytuacje. 

 Kompilowac do pliku: out   
 */

#include "main.h"

#include <fstream>
#include <iostream>

int main() {
    Mebel m1("stol", 90,90,180, "Stol");
    Mebel m2("stol specjalny", 90,90,180, "Stol z fornirowanym blatem");
    Mebel m3("Szafa", 200,90,16, "Ubraniowka");

    std::cout << " + Wypisywanie na ekran"  << std::endl;
    std::cout << m2 << std::endl;

    std::cout << " + Zapisywanie do pliku"  << std::endl;
    std::ofstream of("meble.txt");
    of << m1;
    of << m2;
    of << m3;
    of.close();

    std::cout << " + Wczytywanie z pliku jednego obiektu" << std::endl;
    Mebel x;
    std::ifstream if1("meble.txt");
    if1 >> x;
    if1.close();
    std::cout << x << std::endl;

    std::cout << " + Wczytywanie calego pliku do wektora obiektow" << std::endl;
    std::vector<Mebel> v;
    std::ifstream if2("meble.txt");
    if2 >> v;
    if2.close();

    std::cout << "Ilosc mebli = " << v.size() << std::endl;
    for(unsigned int i = 0; i<v.size(); ++i){
        std::cout << " - " << v[i]  << std::endl;
    }
}

/* ------- output --------
 + Wypisywanie na ekran
<stol specjalny> 90 90 180 "Stol z fornirowanym blatem" 
 + Zapisywanie do pliku
 + Wczytywanie z pliku jednego obiektu
<stol> 90 90 180 "Stol" 
 + Wczytywanie calego pliku do wektora obiektow
Ilosc mebli = 3
 - <stol> 90 90 180 "Stol" 
 - <stol specjalny> 90 90 180 "Stol z fornirowanym blatem" 
 - <Szafa> 200 90 16 "Ubraniowka"
 ----------------------- */
