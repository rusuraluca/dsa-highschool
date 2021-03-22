/*
Fişierele bac1.txt și bac2.txt conţin numere naturale din intervalul [1,10^5]: fișierul bac1.txt
conține pe prima linie un număr n1, iar pe a doua linie un șir de n1 numere, iar fișierul bac2.txt
conține pe prima linie un număr n2, iar pe a doua linie un șir de n2 numere. Numerele aflate pe
aceeași linie a unui fișier sunt ordonate crescător și sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran, în ordine crescătoare, separate prin câte un spațiu, numerele divizibile
cu 5 care se găsesc doar în unul dintre șirurile aflate în cele două fișiere. Dacă nu există niciun astfel de
număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient din punctul de vedere
al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul
bac1.txt conţine numerele
7
1 2 3 4 7 20 60
iar fişierul bac2.txt
conţine numerele
9
3 5 7 8 9 10 12 20 24
pe ecran se afișează, în această ordine, numerele 5 10 60.

a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.
În rezolvare am aplicat o variatie pe tema sortarii prin interclasare. Astfel programul meu citeste alternativ din cele doua fisiere
afisand elementele divizibilie cu 5 care se gasesc decat intr-unul dintre siruri.
Algoritmul este eficient din punct de al memoriei utilizate deoarece foloseste doar variabile elementare
si este eficient din punct de vedere al timpului de executare deoarece are o complexitate linara O(n1+n2)

b. Scrieți programul C/C++ corespunzător algoritmului proiectat.
*/

#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac1.txt");
ifstream g("bac2.txt");

int n1, n2, x, y, k;

int main(){
    f >> n1;
    g >> n2;

    int i=1;
    int j=1;

    f >> x;
    g >> y;

    bool gasit = 0;

    while(i <= n1 && j <= n2){
        if(x == y){
            f >> x; i++;
            g >> y; j++;
        }

        while(x < y && i<=n1){
            if(x % 5 == 0){
                cout << x << " ";
                gasit=1;
            }
            f >> x;
            i++;
        }

        while(x > y && j<=n2){
            if(y % 5 == 0){
                cout << y << " ";
                gasit=1;
            }
            g >> y;
            j++;
        }
    }

    while(i <= n1){
        f >> x;
        i++;
        if(x % 5 == 0){
            cout << x << " ";
            gasit=1;
        }
    }

    while(j <= n2){
        g >> y;
        j++;
        if(y % 5 == 0){
            cout << y << " ";
            gasit=1;
        }
    }

    if(gasit == 0) cout << "nu exista";

    return 0;
}
