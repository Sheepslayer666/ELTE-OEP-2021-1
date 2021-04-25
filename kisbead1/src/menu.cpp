//Készítette:    Veszprémi Anna
//Dátum:         2019.02.19.
//Menürendszer forráskód
//Feladat:
// Veszprémi Anna kodja alapjan Modositotta Horvath Matyas PRREZ1

#include <iostream>
#include "menu.h"
#include "komp.h"
#include "read.hpp"
#include <sstream>
#define menudb 4 //egyedul itt kell javitani, ha a menüt bővítjük

using namespace std;

//Ellenőrzéshez 0..menudb kozotti menüpontokat lehet választani
bool check(int a){return a>=0 && a<=menudb;}
komp k1;
komp k2;
komp k3;
void Menu::run()
{
    int v;
    do{
        v = getMenuPoint();
        switch(v){
            case 1:
                szorzas();
                break;
            case 2:
                osztas();
                break;
            case 3:
                osszeadas();
                break;
            case 4:
                kivonas();
                break;

        }
    }while(v!=0);
}

int Menu::getMenuPoint()
{
    int v;
    cout << "\n****************************************\n";
    cout << "0. Kilepes\n";
    cout << "1. Szorzas\n";
    cout << "2. Osztas\n";
    cout << "3. Osszeadas\n";
    cout << "4. Kivonas\n";
    cout << "****************************************\n";
    //hiba üzenet rugalmas előállítása
    ostringstream s;
    s << "0 es " << menudb << " kozotti egesz szam legyen!";
    string errmsg=s.str();
    //beolvasás read.hpp segítségével
    v=read<int>("Valasztas:",errmsg,check);

    return v;
}

void Menu::szorzas()
{
    cin >>k1;
    cin >>k2;
    k3 = k1 * k2;
    cout << k3;
}

void Menu::osztas()
{
    cin >>k1;
    cin >>k2;
    k3 = k1 / k2;
    cout << k3;
}

void Menu::osszeadas()
{
    cin >>k1;
    cin >>k2;
    k3 = k1 + k2;
    cout << k3;

}

void Menu::kivonas()
{
    cin >>k1;
    cin >>k2;
    k3 = k1 - k2;
    cout << k3;
}




