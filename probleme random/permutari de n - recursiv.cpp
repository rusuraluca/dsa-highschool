/*
Se citeşte un număr natural n. Se cere să se afişeze toate permutările mulţimii {1, 2, ..., n}.
Soluţia, ca orice problemă de backtracking liniar, este o stivă. Lungimea stivei este n, iar pe
orice nivel al stivei vom depune elementele distincte ale mulţimii {1,2,...,n}. Pentru a evita
memorarea într-o soluţie a aceleiaşi valori, utilizăm vectorul viz de lungime n, în care viz[i] = 0
dacă i nu a fost pus încă pe stivă şi viz[i]=1 dacă i este deja pe stivă. Aceasta înseamnă că dacă
de exemplu pe stivă am memorat deja valorile 3, 6, 2, atunci în vectorul viz avem viz[3] = 1,
viz[6] = 1, viz[2] = 1, restul componentelor fiind 0. Pentru nivelul 4 al stivei vom putea depune
acum orice valoare i în care viz[i]=0. Implementare recursiva.
*/

#include<iostream>

using namespace std;

int a[20], n, viz[20];

void PrintSol()
{
	int i;
	for (i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << "\n";
}

void Back(int top)
{
	int i;
	if (top == n + 1) PrintSol();//s-a ajuns la n cifre, se afiseaza permutarea
	else for (i = 1; i <=n; i++)
		if (!viz[i])
		{
			viz[i] = 1;
			a[top] = i;
			Back(top + 1);
			viz[i] = 0;
		}
}

int main()
{
	cout << "n = ";
	cin >> n;
	Back(1);
	return 0 ;
}
