/*
Scrieţi un program C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20 de
caractere, doar litere ale alfabetului englez. Programul determină transformarea cuvântului
citit prin eliminarea fiecărei litere mici a cuvântului, restul literelor nemodificându-se, ca în
exemplu. Programul afişează pe ecran cuvântul obţinut. În cazul în care cuvântul citit
conţine numai litere mici, programul va afişa mesajul CUVANT VID.
Exemple:
- dacă se citeşte cuvântul: baCALaUreaT se va afişa pe ecran: CALUT
- dacă se citeşte cuvântul: vara se va afişa pe ecran: CUVANT VID
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    bool vid=1;
    char c[20];

    cin.getline(c, 20);

    for(int i=0; i<strlen(c); i++)
        if(isupper(c[i])){
            vid=0;
            cout<<c[i];
        }

    if(vid) cout<<"CUVANT VID";

    return 0;
}
