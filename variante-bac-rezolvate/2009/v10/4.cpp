/*
Fişierul BAC.TXT conţine pe prima linie un număr natural n (0<n≤1000000) şi pe a doua
linie, separate prin câte un spaţiu, n numere naturale nenule (cu cel mult 7 cifre fiecare)
ordonate crescător.
a) Scrieţi un program C/C++ care citeşte toate numerele din fişier şi, utilizând un algoritm
eficient din punct de vedere al memoriei utilizate şi al timpului de executare, determină
pentru fiecare număr citit de pe a doua linie a fişierului, cea mai mică valoare mai mare sau
egală cu acesta ce reprezintă o putere a lui 2. Un număr natural x este putere a lui 2 dacă
există un număr natural k astfel încât x=2k
.
Numerele astfel determinate vor fi scrise pe ecran, separate prin câte un spaţiu.
Exemplu: dacă fişierul are conţinutul de mai jos
5
3 5 8 9 12
pe ecran se va afişa:
4 8 8 16 16 (6p.)
b) Descrieţi succint, în limbaj natural, algoritmul pe baza căruia a fost scris programul de la
punctul a), explicând în ce constă eficienţa metodei folosite. (4p.)
*/

#include <iostream>

using namespace std;

int main(){

    int n, x, aux;
    bool gasit=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        gasit = 0;
        cin >> x;
        while(!gasit){
            aux = x;
            while(aux % 2 == 0) aux/=2;
            if(aux==1) gasit=1;
            else x++;
        }
        cout<< x << " ";
    }
    return 0;
}
