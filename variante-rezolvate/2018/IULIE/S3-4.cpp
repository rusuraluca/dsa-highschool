#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Numim secvență neuniformă a unui șir de numere naturale un subșir al acestuia, format din termeni aflați pe poziții consecutive în șirul dat, cu proprietatea că oricare trei termeni aflați pe poziții consecutive sunt diferiți. Lungimea secvenței este egală cu numărul de termeni ai acesteia.
Fișierul bac.txt conține un șir de cel mult 106 numere naturale din intervalul [0,9]. Numerele sunt separate prin câte un spațiu, iar în șir există cel puțin trei termeni diferiți pe poziții consecutive.
Se cere să se afișeze pe ecran lungimea maximă a unei secvențe neuniforme a șirului aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al memoriei utilizate.
Exemplu: dacă fişierul bac.txt conţine numerele 7 7 1 3 7 7 5 3 3 3 7 8 9 atunci pe ecran se afișează valoarea 4

*/

int main(){
    unsigned int n;
    int precedent = -1;
    int precedent2 = -1;
    int contor = 1;
    int contor_max = 0;
    
    while(cin >> n){
        if(precedent != n && precedent2 != n){
            contor++;
            if(contor > contor_max)
                contor_max = contor;
        }
        else
            contor = 1;
        
        precedent2 = precedent;
        precedent = n;
    }
    cout << contor_max;
    return 0;
}