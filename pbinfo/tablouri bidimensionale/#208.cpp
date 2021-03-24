/*
#208
Scrieţi un program care citeşte de la tastatură două numere naturale nenule n şi m 
şi construieşte în memorie o matrice cu n linii şi m coloane astfel încât, 
parcurgând tabloul linie cu linie de sus în jos şi fiecare linie de la stânga la dreapta, 
să se obţină şirul primelor n*m pătrate perfecte impare , ordonat strict crescător.

Intrare
2 3

Ieșire
1 9 25
49 81 121 
*/

#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n * m; ++i) {
        cout << (2*(i-1)+1) * (2*(i-1)+1) << " ";
        if(i % m == 0) cout << endl;
    }
    return 0;
}
