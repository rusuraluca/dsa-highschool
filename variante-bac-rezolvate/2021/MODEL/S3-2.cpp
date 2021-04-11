/*
Scrieți un program C/C++ care citește de la tastatură două numere naturale din intervalul [2,10^2],
m și n, și construiește în memorie un tablou bidimensional cu m linii și n coloane, cu proprietatea că
parcurgându-l linie cu linie de sus în jos și fiecare linie de la stânga la dreapta, se obține șirul primelor
m*n pătrate perfecte pare, ordonat strict descrescător, ca în exemplu.
Elementele tabloului obținut se afișează pe ecran, fiecare linie a tabloului pe câte o linie
a ecranului, valorile de pe aceeași linie fiind separate prin câte un spațiu.
Exemplu: pentru m=2, n=3 se obține tabloul alăturat.
100 64 36
 16 4 0
*/

#include <iostream>
using namespace std;

int main(){
    int m, n, a[105][105];
    cin >> m >> n;
    int p = 0;
    for(int i = m; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            a[i][j] = p*p;
            p+=2;
        }
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
