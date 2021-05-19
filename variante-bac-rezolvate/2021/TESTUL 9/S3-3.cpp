/*a)
Programul citeste numere din fisier si le elimina cifrele pana devin 0, acestea fiind contorizate intr-un vector de freventa. La final se parcurge vectorul de la coada la cap si se afiseaza cifra i de v[i] ori. 
Algoritmul este eficient din punct de vedere al timpului de executare deoarece rezolva problema in n pasi, n fiind numarul de numere din fisier, rezultand o complexitate liniara O(n).

b)*/
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.txt");

int v[11], x;

int main(){
    while(f>>x)
        do{
            v[x%10]++;
            x/=10;
        }while(x!=0);

    for(int i=9;i>=0;i--)
        for(int j=1;j<=v[i];j++)
            cout<<i;
    return 0;
}