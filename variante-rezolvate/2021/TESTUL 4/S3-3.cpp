#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac1.txt");
ifstream g("bac2.txt");

/*
Rezolvarea mea aplica o variatie pe tema sortarii prin interclasare si citeste alternativ din cele doua fisiere 
afisand elementele divizibilie cu 5 care se gasesc decat intr-unul dintre siruri
Algoritmul este eficient din punct de al memoriei utilizate deoarece foloseste doar variabile elementare
si este eficient din punct de vedere al timpului de executare deoarece are o complexitate linara O(n1+n2) 
*/
int n1, n2, x, y, k;

int main(){
    f >> n1;
    g >> n2;
    
    int i=1;
    int j=1;
    
    f >> x;
    g >> y;
    
    bool gasit = 0;
    
    while(i <= n1 && j <= n2){
        if(x == y){
            f >> x; i++;
            g >> y; j++;
        }
        
        while(x < y && i<=n1){
            if(x % 5 == 0){ 
                cout << x << " ";
                gasit=1;
            }
            f >> x;
            i++;
        }
        
        while(x > y && j<=n2){
            if(y % 5 == 0){
                cout << y << " ";
                gasit=1;
            }
            g >> y;
            j++;
        }
    }
   
    while(i <= n1){
        f >> x;
        i++;
        if(x % 5 == 0){ 
            cout << x << " ";
            gasit=1;
        }
    }
    
    while(j <= n2){
        g >> y;
        j++;
        if(y % 5 == 0){ 
            cout << y << " ";
            gasit=1;
        }
    }
    
    if(gasit == 0) cout << "nu exista";
   
    return 0;
}