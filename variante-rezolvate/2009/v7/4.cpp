/*
Se consideră şirul definit de următoarea relaţie de recurenţă:
a) Scrieţi numai antetul unui subprogram sub, care primeşte prin intermediul parametrului n
un număr natural de maximum 8 cifre, şi care returnează cel mai mare termen al şirului de
mai sus mai mic sau cel mult egal cu n.
Exemplu: dacă n=83 atunci subprogramul va returna valoarea 80. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural s (s≤10000000)
şi determină un şir de numere distincte a căror sumă este egală cu s, folosind apeluri utile
ale subprogramului sub. Numerele determinate se vor scrie în fişierul Numere.txt, pe
prima linie a acestuia, separate prin câte un spaţiu.
Exemplu: dacă valoarea citită de la tastatură este 63, atunci fişierul Numere.txt va
conţine valorile următoare, nu neapărat în această ordine: 40 20 3. (6p.)
*/

#include <iostream>

using namespace std;

long sub(long n) {
    if (n <= 5)
        return n;
    else {
        long k = 5;
        while (k <= n)
            k = k * 2;
        return k / 2;
    }
}

int main() {
    long s;
    cin >> s;
  
    while (s) {
        long n = sub(s);
        cout << n << " ";
        s = s - n;
  }
}