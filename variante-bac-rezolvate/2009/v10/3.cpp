/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤100) şi apoi
cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional
a. Programul determină şi afişează pe prima linie a ecranului suma celor n elemente ale
tabloului, pe a doua linie a ecranului suma primelor n-1 elemente şi aşa mai departe astfel
încât pe linia n-1 se va afişa suma primelor două elemente, iar pe linia n primul element al
tabloului.
Exemplu: dacă n=4, iar tabloul are elementele a=(1,2,3,4) programul
va afişa valorile alăturate. (10p.)
10
6
3
1 
*/

#include <iostream>

using namespace std;

int main(){

    int n, a[100], s=0;

    cin >> n;

    for(int i=1; i<=n; i++) 
        cin >> a[i];

    for(int i=1; i<=n; i++){
        s=0;
        for(int j=1; j<=n-i+1; j++) 
            s+=a[j];
        cout << s << '\n';
    }
    return 0;
}
