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
using namespace std;

int cif (int a, int b){
	int nrAparitii = 0;
	
	while(a > 0){
		if (a % 10 == b)
			nrAparitii++;
		a = a/10;
	}

	return nrAparitii;
}

int n, frecv[10];
	
int main(){

	cin>>n;
	
	while (n > 0){
		if (frecv[n%10] == 0){
			frecv[n%10] = cif(n,n%10);
		}
		n = n/10;
	}

	int ok = 0, nr = 0,p = 1;
	for (int i = 0; i <= 9 && ok == 0; i++){
		if (frecv[i] % 2 != 0){
			ok = 1;
			nr = 0;
		}
		else if (frecv[i] > 0){
			int numarNou = 0, copie = p;
				/* numarNou - cream numarul din cifra i
				 * copie - ne ajuta sa vedem cate cifre avem
				 */
			
			while (frecv[i] > 0){
				numarNou = numarNou*10 + i;
				frecv[i]--;
				if (frecv[i] % 2 == 0)
					p = p*10;
			}	
			
			nr = ((nr/copie)*(p/copie)*(p/copie) + numarNou)*copie + nr%copie;
				
				/* scoatem prima parte a numarului, dupa care
				 *	adaugam var numarNou si ultima parte
				 *		a numarului
				 */
		}
	}
	cout << nr << '\n';
	return 0;
}