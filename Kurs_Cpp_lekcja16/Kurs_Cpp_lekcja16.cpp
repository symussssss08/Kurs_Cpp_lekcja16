// Kurs_Cpp_lekcja16.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

class Czlowiek
{
public:
    string imie; 
    int wiek;

    void przedstawSie()
    {
        cout << "Nazywam sie " << imie << " i mam " << wiek << " lat." << endl;
    }
};

int main()
{
    Czlowiek cz1; 
   
    cz1.imie = "Szymon";
    cz1.wiek = 18;
    cz1.przedstawSie();

    Czlowiek cz2; 

    cz2.imie = "Adam"; 
    cz2.wiek = 16; 
    cz2.przedstawSie(); 
    
    return 0; 
}

