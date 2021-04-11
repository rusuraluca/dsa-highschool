/*
Se consideră un text cu maximum 255 de caractere în care cuvintele sunt separate prin
unul sau mai multe spaţii. Primul caracter din textul citit este o literă, iar cuvintele sunt
formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi îl transformă înlocuind prima literă a fiecărui cuvânt cu litera mare
corespunzătoare, restul caracterelor rămânând nemodificate. Textul astfel transformat va fi
afişat pe ecran.
Exemplu: dacă de la tastatură se introduce textul: mare frig rosu
se va afişa pe ecran: Mare Frig Rosu
*/


#include <iostream>
#include <string.h>

using namespace std;

int main(){

	char c[256];
	cin.get(c, 255);

	int i;
	c[0] = c[0] + 'A' - 'a';
	for (i = 1; i < strlen(c); i++){
		if (c[i] != ' ' && c[i - 1] == ' ')
			c[i] = c[i] + 'A' - 'a';

	}
	cout << c;

	return 0;

}