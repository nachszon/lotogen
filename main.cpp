/*lotogen 1.0.0.08*/
/*Nachszon*/

/*Generowanie zestawu licz pseudolowych
wersja zak�ada mo�liwo�� pojawienia si� duplikat�w*/

#include <iostream>
// TODO (Nachszon#1#): W��czenie biblioteki <ctime>


using namespace std;


int main()
{

    //dolna granica zakresu lsowania
    int start_los;

    //g�rna granica zakresu losowania
    int end_los;

    //pierwsza cz�� argumentu dla funkcji rand()
    //drug� cz�ci� b�dzie
    int rand_los;

    //liczba losow w jednym zak�adzie
    int ilosc_losow;

    //liczba_losowana
    int liczba_losowana;


    //liczba losow w jednym zak�adzie
    ilosc_losow=6;



    //dolna granica zakresu lsowania
    start_los=1;

    //g�rna granica zakresu losowania
    end_los=49;



    //wyliczenie pierszwej cz�ci argumentu funkcji rand()
    //drug� cz�� b�dzie stanowi�a zmienna start_los
    //suma tych dw�ch cz�ci b�dzie stanowi�a pe�ny argument dla funkcji rand()
    rand_los=(end_los-start_los)+1;
/* TODO (Nachszon#1#): Implementacja funkcji srand(time(NULL)
(warunek: w��czona biblioteka ctime) */



    //wyliczenie liczby losowej
    //wywo�anie funkcji rand() z pe�nym argumentem
    liczba_losowana=rand()%rand_los+start_los;


/// TODO (Nachszon#1#): Implementacja p�tli wywo�uj�cej ilosc_losow liczb losowych

    //wyrzucenie na ekran liczby losowej
    cout << liczba_losowana << endl;


    //cout << "Hello world!" << endl;
    return 0;
}
