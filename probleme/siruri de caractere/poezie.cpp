#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
In fisierul poezie.in se gaseste un text pe mai multe linii reprezentand o poezie. Textul contine litere mari si mici ale alfabetului englez, spatii, newline si semne de punctuatie . , ! ?
In fisierul poezie.out se va afisa textul initial, din care vor fi eliminate toate semnele de punctuatie, mai putin cele aflate la capat de linie.
Numarul total de caractere din fisier este cel mult 5000.
Exemplu:
poezie.in
A fost!... odata!,
Ca, nicioada,,
O fata? frumoasa... de imparat!
poezie.out
A fost odata,
Ca nicioada,
O fata frumoasa de imparat!
*/

int main(){
    char s[5001], sep[]=".,!?";
    cin.get(s,5001,EOF);
    
    for(int i=0; s[i]; i++)
        if(strchr(sep,s[i]) && s[i+1]!='\n'){
            char aux[5001];
            strcpy(aux,s+i+1);
            strcpy(s+i,aux);
            i--;
        }
    cout << s;
    return 0;
  
}
