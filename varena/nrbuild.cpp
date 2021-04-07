/*
Nrbuild
Fie un sir de n numere naturale. Sa se determine cel mai mic si cel mai mare numar ce se pot forma folosind prima cifra a fiecarui numar.
{1}
Date de intrare
Fişierul de intrare nrbuild.in va contine pe prima linie valoarea n iar pe cea de-a doua linie, cele n valori ale sirului
{1}
Date de ieşire
În fişierul de ieşire nrbuild.out se va afisa pe prima linie valoarea maxima iar pe cea de-a doua linie valoarea minima, ce se pot forma cu primele cifre ale numerelor date.
{1}
Restricţii
1 ≤ n ≤ 100
Numerele din sir au maxim 9 cifre şi sunt strict mai mari ca zero
{1}
Exemplu
nrbuild.in
5
23 34 55 12 67
{1}
nrbuild.out
65321
12356
*/
 
#include <fstream>
 
using namespace std;
 
ifstream cin("nrbuild.in");
ofstream cout("nrbuild.out");

int f[10];
int main(){
    int n, x;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> x;
        while(x > 9)
            x /= 10;
        f[x]++;
    }
    
    for(int i = 9; i >= 1; i--){
        for(int j = 1; j <= f[i]; j++)
            cout << i;
    }
    
    cout << '\n';
    
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= f[i]; j++)
            cout << i;
    }
    
    return 0;
}