/*
#218
Scrieţi un program care citeşte de la tastatură un număr natural n 
şi construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, 
în care fiecare element aflat pe chenarul exterior al matricei 
este egal cu suma dintre indicele liniei 
şi indicele coloanei pe care se află, iar fiecare dintre celelalte elemente 
este egal cu suma celor trei “vecini” situaţi în matrice pe linia anterioară.

Intrare
5

Ieșire
2 3 4 5 6
3 9 12 15 7
4 24 36 34 8
5 64 94 78 9
6 7 8 9 10 
*/

#include <iostream>
using namespace std;

int main(){
    int n, a[16][16];
    cin >> n;
    
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(i == 1 || i == n || j == 1 || j == n) 
                a[i][j] = i + j;
            else 
                a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
        }
    }    
   
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }    
        cout << '\n';
    }
    
    return 0;
}
