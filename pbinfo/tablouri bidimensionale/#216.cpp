/*
#216
Scrieţi un program care citeşte de la tastatură un număr natural n 
şi construieşte în memorie o matrice cu n linii şi n coloane 
în care elementele de pe cele două diagonale sunt egale cu 0, 
elementele care se află deasupra ambelor diagonale sunt egale cu 1, 
elementele care se află sub ambele diagonale sunt egale cu 2, 
iar restul elementelor sunt egale cu 3.

Intrare
5

Ieșire
0 1 1 1 0
3 0 1 0 3
3 3 0 3 3
3 0 2 0 3
0 2 2 2 0 
*/

#include <iostream>
using namespace std;

int main(){
    int a[25][25], n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
           
            //cele două diagonale
            if ((i == j) || ((i + j) == (n + 1))) 
                a[i][j] = 0;
            
            //deasupra ambelor diagonale 
            else if ((i < j) && (i + j) < (n + 1)) 
                a[i][j] = 1;
                
            //sub ambele diagonale
            else if ((i > j) && (i + j)>(n + 1))
                a[i][j] = 2;
            
            //restul elementelor
            else 
                a[i][j] = 3;
        }
    }    
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
