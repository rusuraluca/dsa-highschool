//  a.
/*
Algoritmul este eficient 
din punct de vedere al timpului de executie deoarece este un algoritm liniar, are complexitatea O(n), unde n numarul de numere din fisier, 
si din punct de vedere al spatiului de memorie deoarece utilizeaza variabile simple.
*/

//  b.
#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

int x, y, cy, l, lmax;

int main(){
    in >> x;
    l = 1;
    lmax = 0;
    while(in >> y){
        cy = y;
        while(cy > 9)
            cy/=10;
        //compar la fiecare pas prima cifra a numarului curent (x) cu ultima cifra (cy) a numarului anterior (y)
        //daca e egal cresc lungimea secventei curente
        if(x % 10 == cy) l++;
        //altfel 
        else {
            //compar cu lungimea maxima
            if(l > lmax)
                lmax = l;
            //actualizez
            l=1;
        }
        //numarului curent x devine nr anterior y
        x = y;
    }
    cout << lmax;
    return 0;
}
