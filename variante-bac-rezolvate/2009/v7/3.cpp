/*
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤100)şi cele
3*n elemente ale tabloului unidimensional v, numere naturale cu cel mult patru cifre fiecare.
Tabloul este împărţit în trei zone, cu câte n elemente fiecare: prima zonă conţine primele n
elemente din tablou, a doua zonă conţine următoarele n elemente din tablou, restul
elementelor fiind în zona a treia. Programul va interschimba elementele zonei unu cu
elementele zonei trei şi va afişa pe ecran toate elementele tabloului, astfel transformat,
separate prin câte un spaţiu.
De exemplu, pentru n=3 şi v=(1 2 3 4 5 6 7 8 9), se va afişa pe ecran:
7 8 9 4 5 6 1 2 3
*/

#include <iostream>

using namespace std;

int main(){

    int n, a[300];

    cin>>n;

    for(int i=1; i<=3*n; i++) cin >> a[i];

    for(int i=1; i<=n; i++){ 
        int aux = a[i];
        a[i]=a[2*n+i];
        a[2*n+i]=aux;
    }
    
    for(int i=1; i<=3*n; i++) cout << a[i] << " ";

    return 0;
}