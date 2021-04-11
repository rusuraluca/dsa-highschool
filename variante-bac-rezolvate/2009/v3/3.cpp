/*
Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult
100 de numere naturale, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++
care citeşte toate numerele din fişier şi afişează pe ecran, separate prin câte un spaţiu, în
ordine crescătoare, toate numerele din fişier care au cel puţin 3 cifre. Dacă fişierul nu
conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA. 
*/

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("NR.TXT");

int main() {
    int v[100], n=0, x, i, j, aux=0;

    while (fin >> x) {
        if (x >= 100) {
            n++
            v[n] = x;
        }
    }
    if (n == 0)
        cout << "nu exista";
    else
        for (i = 0; i <= n - 2; i++)
            for (j = i + 1; j <= n - 1; j++) {
                if (v[i] > v[j]) {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }   
            }
                
    for (i = 0; i <= n - 1; i++)
        cout << v[i] << " ";
    
    return 0;
}
