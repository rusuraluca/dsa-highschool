/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează:
- elementele aflate pe diagonala secundară a matricei vor primi valoarea 0
- elementele de pe prima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n
- elementele de pe a doua linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n-1
...
- elementele de pe ultima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii 
(ca în exemplu).
Exemplu: pentru n=4 se va afişa matricea alăturată. 
 4 4 4 0
 3 3 0 3
 2 0 2 2
 0 1 1 1
*/

#include <iostream>
using namespace std;

int main() {
    int n, j, a[30][30];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i + j == n - 1)
                a[i][j] = 0;
            else
                a[i][j] = n - i;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
