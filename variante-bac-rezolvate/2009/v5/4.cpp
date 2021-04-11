/*
Subprogramul f, cu un parametru:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 8 cifre (a>1);
- returnează cel mai mic divizor prim al valorii parametrului a.
Exemplu: pentru valoarea 45 a parametrului a, subprogramul va returna valoarea 3
deoarece a=32
*5, iar cel mai mic divizor prim al său este 3.
a) Scrieţi definiţia completă a subprogramului f. (4p.)
b) Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din şir
fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va
determina şi va afişa pe ecran toate numerele prime din şirul citit. Numerele determinate se
vor afişa pe ecran, separate prin câte un spaţiu. Dacă nu există astfel de numere se va afişa
pe ecran mesajul NU EXISTA.
Exemplu: pentru n=8, şirul: 1125, 2, 314, 101, 37, 225, 15, 12 se va afişa:
2 101 37
*/

#include <iostream>
using namespace std;

int f(int a){
	int d = 2;
	for (d = 2; d <= a/2; d++)	
		//primul divizor al lui a este si numar prim
		if (a % d == 0)	
			return d;
	
	return a;
}

int main(){
	int n, x;
	cin >> n;
	
	bool ok = false;
	for (int i = 0; i < n; i++){
		cin >> x; 
		if (x == f(x)){ //daca a este prim
		    ok = true;
		    cout << x << " ";
		}
	}
	
	if(ok == false) cout << "NU EXISTA";
	return 0;
}