/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤50) şi care
afişează pe prima linie a fişierului BAC.TXT primele n numere pare, pe a doua linie primele
n-1 numere pare, ..., pe linia n primul număr par. Numerele vor fi afişate pe fiecare linie în
ordine crescătoare şi vor fi separate prin câte un spaţiu. (10p.)
Exemplu: dacă n=3 fişierul BAC.TXT va avea conţinutul alăturat. 
 0 2 4
 0 2
 0 
*/

#include <iostream>

using namespace std;

int main() {
    int n, k=0;

    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=0; j<i; j++){
            cout << 2 * j << " ";
        }
        cout << endl;
    }

    return 0;
}
