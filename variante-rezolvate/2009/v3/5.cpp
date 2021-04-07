/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează:
- elementele aflate pe diagonala principală a matricei vor primi valoarea 0
- elementele de pe prima coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea n
- elementele de pe a doua coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea n-1
...
- elementele de pe ultima coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii (ca în
exemplu).
Exemplu: pentru n=4 se va afişa matricea alăturată. (10p.)
0 3 2 1
4 0 2 1
4 3 0 1
4 3 2 0
*/

#include <iostream>
using namespace std;

int main(){
    int i, n, j, a[30][30];
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                a[i][j] = 0;
            else
                a[i][j] = n - j;
                
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

	return 0;
}
