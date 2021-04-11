/*
Un număr n se numeşte extraprim dacă atât el, cât şi orice număr obţinut prin permutarea
circulară a cifrelor lui n, sunt numere prime. De exemplu, numărul 197 este un număr
extraprim deoarece 197, 971, 719 sunt numere prime. Numărul 23 nu este extraprim
deoarece 32 nu este prim.
a) Scrieţi definiţia completă a unui subprogram f, cu un parametru, subprogram care:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 2 cifre (a>1) ;
- returnează suma tuturor exponenţilor din descompunerea în factori primi a valorii
parametrului a.
Exemplu: pentru a=90 subprogramul va returna valoarea 4, deoarece a=2*32
*5 şi
1+2+1=4. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n, 2≤n≤99, şi
care, folosind apeluri utile ale subprogramului f, verifică dacă n este un număr extraprim şi
afişează pe ecran, în caz afirmativ mesajul DA, iar altfel mesajul NU.
*/

#include <iostream>
using namespace std;

int f(int a){
	int d = 2, s = 0;
	while (a != 1){
		while (a % d == 0){
			s++;
			a = a/d;
		}
		d++;
	}
	return s;

}

int main(){
	int n;
	cin >> n;
	// a
	cout << f(n) << '\n';
	
	// b
	int copie = n;
	int ok = 0;
	do{
		if (f(n) != 1){
			ok = 1;
			cout<<"NU";
		} 
		if (n >= 100)
			n = (n % 100) * 10 + n / 100;
		else if( n >= 10 )
			n = (n % 10) * 10 + n / 10;
	} while(ok == 0 && n != copie);
	
	if (ok == 0)
		cout<<"DA";

	return 0;
}
