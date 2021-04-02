/*Nachszon*/

/*Generowanie zestawu licz pseudolowych
wersja zak³ada mo¿liwoœæ pojawienia siê duplikatów*/

#include <iostream>
#include <ctime>


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

    int tabela_losow[ilosc_losow];

    //dolna granica zakresu lsowania
    start_los=1;

    //górna granica zakresu losowania
    end_los=49;



    //wyliczenie pierszwej czêœci argumentu funkcji rand()
    //drug¹ czêœæ bêdzie stanowi³a zmienna start_los
    //suma tych dwóch czêœci bêdzie stanowi³a pe³ny argument dla funkcji rand()
    rand_los=(end_los-start_los)+1;
    srand(time(NULL));




//utworzenie zmiennej ilosc_duplikatow
int ilosc_duplikatow;

//inicjalizacja zmiennej ilość duplikatów
ilosc_duplikatow=1;

///Implementacja pętli wyliczającej duplikaty
///licznik wewnętrzny=licznik_zewnętrzny+1:
///licznik_z=licznik_w+1

while (ilosc_duplikatow!=0){

        ilosc_duplikatow=0;

        for (int licznik=0;licznik<ilosc_losow;licznik++){

            liczba_losowana=rand()%rand_los+start_los;
            tabela_losow[licznik]=liczba_losowana;
        }

for (int licznik=0;licznik<ilosc_losow-1;licznik++){

    for (int licznik_w=licznik_w+1;licznik_w<ilosc_losow;licznik_w++){

        if (tabela_losow[licznik]==tabela_losow[licznik_w]){

            ilosc_duplikatow++;
        }

    }

}

}




    for (int licznik=0;licznik<ilosc_losow;licznik++){

            //wyliczenie liczby losowej
    //wywo³anie funkcji rand() z pe³nym argumentem
    liczba_losowana=rand()%rand_los+start_los;

    //wyrzucenie na ekran liczby losowej
    cout << liczba_losowana << endl;


    }



    //cout << "Hello world!" << endl;
    return 0;
}
