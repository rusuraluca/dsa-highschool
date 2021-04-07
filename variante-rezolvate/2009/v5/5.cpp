/*
5. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mare dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu. (10p.)
Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată.
 1 2 3 4 5
 2 2 3 4 5
 3 3 3 4 5
 4 4 4 4 5
*/

#include <iostream>
using namespace std;

int main(){

	unsigned int n, m, A[11][11];
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (i > j)
				A[i][j] = i;
			else
				A[i][j] = j;
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++)
			cout << A[i][j] << " ";
		cout << '\n';
	}

	return 0;
}