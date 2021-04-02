/*lotogen 1.0.0.08*/
/*Nachszon*/

/*Generowanie zestawu licz pseudolowych
wersja zak³ada mo¿liwoœæ pojawienia siê duplikatów*/

#include <iostream>
// TODO (Nachszon#1#): W³¹czenie biblioteki <ctime>


using namespace std;


int main()
{

    //dolna granica zakresu lsowania
    int start_los;

    //górna granica zakresu losowania
    int end_los;

    //pierwsza czêœæ argumentu dla funkcji rand()
    //drug¹ czêœci¹ bêdzie
    int rand_los;

    //liczba losow w jednym zak³adzie
    int ilosc_losow;

    //liczba_losowana
    int liczba_losowana;


    //liczba losow w jednym zak³adzie
    ilosc_losow=6;



    //dolna granica zakresu lsowania
    start_los=1;

    //górna granica zakresu losowania
    end_los=49;



    //wyliczenie pierszwej czêœci argumentu funkcji rand()
    //drug¹ czêœæ bêdzie stanowi³a zmienna start_los
    //suma tych dwóch czêœci bêdzie stanowi³a pe³ny argument dla funkcji rand()
    rand_los=(end_los-start_los)+1;
/* TODO (Nachszon#1#): Implementacja funkcji srand(time(NULL)
(warunek: w³¹czona biblioteka ctime) */



    //wyliczenie liczby losowej
    //wywo³anie funkcji rand() z pe³nym argumentem
    liczba_losowana=rand()%rand_los+start_los;


/// TODO (Nachszon#1#): Implementacja pêtli wywo³uj¹cej ilosc_losow liczb losowych

    //wyrzucenie na ekran liczby losowej
    cout << liczba_losowana << endl;


    //cout << "Hello world!" << endl;
    return 0;
}
