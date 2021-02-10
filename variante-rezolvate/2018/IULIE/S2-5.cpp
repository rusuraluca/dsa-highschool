#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Fiind dat un cuvânt s, format numai din litere, și un cod c, de aceeași lungime cu s, format
numai din cifre, numim codificare a lui s pe baza codului c 

operația de construire a unui nou șir, 
în care inițial se copiază prima literă din s, 
apoi, parcurgând de la stânga la dreapta restul șirului s, 
se adaugă litera curentă la începutul noului șir, dacă cifra corespunzătoare de pe aceeași poziție în c este pară, 
sau la finalul noului șir, în caz contrar.

Exemplu: dacă șirul s este etalon, iar codul este 025843 se obține cuvântul oltean
(inițial șirul conține litera e, apoi se adaugă, în ordinea parcurgerii lui s, literele t, l și o la
început, iar restul literelor la final).
Scrieţi un program C/C++ care citeşte de la tastatură două cuvinte, notate cu s și c, fiecare
având cel mult 102
 caractere, s fiind format doar din litere mici ale alfabetului englez, iar c
fiind format doar din cifre. După primul cuvânt se tastează Enter. Programul construiește în
memorie și afișează pe ecran cuvântul obținut prin codificarea lui s pe baza lui c, dacă cele
două cuvinte au aceeași lungime, sau mesajul cod incorect, în caz contrar.
Exemplu: dacă se citesc cuvintele alăturate, se afişează pe ecran cuvântul
oltean 
*/

int main(){
    char s[101], c[101], r[101]="", aux[101];
    cin >> s >> c;
    for(int i=0; i<strlen(s); i++)
        if(c[i]%2 == 1)
           strncat(r, s+i,1);
        else{
            strcpy(aux,r);
            r[0]=s[i];
            r[1]='\0';
            strcat(r,aux);
        }
    cout << r;
    return 0;
}