/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu cel mult 8 cifre
(n≥10) şi care creează fişierul text NR.TXT ce conţine numărul n şi toate prefixele nenule
ale acestuia, pe o singură linie, separate prin câte un spaţiu, în ordine descrescătoare a
valorii lor.
Exemplu: pentru n=10305 fişierul NR.TXT va conţine numerele:
10305 1030 103 10 1
*/

#include <iostream>
#include <fstream>
using namespace std;

ofstream f("NR.TXT");

int main() {
    long n;
    cin >> n;
    while (n) {
        f << n << " ";
        n = n / 10;
    }
}