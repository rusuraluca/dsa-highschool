#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Se citeste o propozitie cu maxim 200 de litere si spatii si apoi o silaba formata din exact 2 litere.
Calculati si afisati numarul de aparitii ale silabei in propozitie.
Exemplu:
ana are mere
re
=> 2
*/

int main(){
    char s[201];
    cin.getline(s, 200)
    
    char sil[2];
    cin >> sil;
    
    int c=0;
    for(int i=0; i<=strlen(s)-1; i++){
        if(p[i]==sil[0] && p[i+1]==sil[1]) c++;
    }
    cout << c;
    return 0;
}