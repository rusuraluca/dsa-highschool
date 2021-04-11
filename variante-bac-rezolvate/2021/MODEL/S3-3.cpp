/*
Fișierul cheltuieli.in are cel mult 10^6 linii, fiecare linie conținând câte trei numere naturale din
intervalul [1,10^2], reprezentând, în această ordine, date despre câte o achiziție: tipul produsului
cumpărat, numărul de produse de acest tip cumpărate, respectiv prețul unui astfel de produs la acel
moment. Numerele aflate pe aceeași linie sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran cea mai mare sumă cheltuită pentru toate produsele de
același tip, precum și numărul de tipuri de produse pentru care s-a obținut această sumă.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul cheltuieli.in are conținutul alăturat, se afișează pe ecran: 26 2
(s-a cheltuit suma maximă 26 pentru produsele de tipul 1 și 4: 26=16·1+5·2=1·10+2·8)
4 1 10
1 16 1
4 2 8
2 1 5
1 5 2

a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.
Algoritmul este eficient din punct de al memoriei utilizate deoarece folosesc variabile elementare și un singur vector de frecvență.
De asemenea algoritmul este eficient și din punct de vedere al timpului de executare deoarece are o complexitate linara O(t)

b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cheltuieli.in");

int f[105];

int main(){
    int t, n, p;
    int maxx = 0;
    f[0] = 0;
    while(fin >> t >> n >> p){
        f[t] += n*p;
        if(f[t] > maxx){
            maxx = f[t];
            f[0] = 1;
        } else if(f[t] == maxx){
            f[0]++;
        }
    }

    cout << maxx << " " << f[0];

    return 0;
}
