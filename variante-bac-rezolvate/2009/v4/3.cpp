/*
Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif.
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu cel mult 8
cifre, dintre care cel puţin una impară, şi care determină şi afişează pe ecran, folosind
apeluri utile ale subprogramului cif, cel mai mic număr natural care poate fi obţinut
utilizând toate cifrele impare ale numărului n.
Exemplu: dacă n=2152331 atunci se va afişa pe ecran numărul 11335.
*/

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("NR.TXT");

int frecv[100], a;
int main(){

	while (fin >> a){
		if (a < 100)
			frecv[a]++;
	}

	int ok = 0;
	for (int i = 99; i >= 0; i--){
		if (frecv[i] != 0){
			cout<<i<<" ";
			ok = 1;
		}
	}	
	
	if (ok == 0)
		cout<<"NU EXISTA";

	return 0;
}