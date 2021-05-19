/*
Se consideră tabloul bidimensional cu n linii şi n coloane ce conţine numere naturale cu cel
mult patru cifre fiecare. Scrieţi programul C/C++ care citeşte de la tastatură numărul natural
n (2≤n≤23) şi cele n*n elemente ale tabloului şi apoi afişează pe ecran elementele
primului pătrat concentric, separate prin câte un spaţiu. Pătratul este parcurs în sensul
acelor de ceasornic începând din colţul său stânga-sus, ca în exemplu. Primul pătrat
concentric este format din prima şi ultima linie, prima şi ultima coloană a tabloului.
Exemplu: pentru n=5 şi tabloul alăturat, 
1 2 3 4 5
6 7 8 9 1
2 3 4 5 6
7 8 9 1 2
3 4 5 6 7
se va afişa:
1 2 3 4 5 1 6 2 7 6 5 4 3 7 2 6
*/

#include <iostream>

using namespace std;

int main(){

    int n, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int j=1; j<=n; j++) cout<<a[1][j]<<" ";
    for(int i=2; i<=n; i++) cout<<a[i][n]<<" ";
    for(int j=n-1; j>=1; j--) cout<<a[n][j]<<" ";
    for(int i=n-1; i>=2; i--) cout<<a[i][1]<<" ";

    return 0;
}
