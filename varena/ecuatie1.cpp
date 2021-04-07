/*
Ecuatie1
De cand invata informatica, Gigel se gandeste la aplicatii care ii pot fi utile pentru rezolvarea mai rapida a temelor. La matematica are de rezolvat mai multe ecuatii de gradul I. Lui Gigel i se pare mult mai simplu sa faca un program care sa rezolve o astfel de problema, insa nu stie cum. El te roaga sa il ajuti si sa faci tu acest program.

Date de intrare
Fişierul de intrare ecuatie1.in va contine numerele intregi a si b.

Date de ieşire
În fişierul de ieşire ecuatie1.out se va afisa multimea solutiilor intregi ale ecuatiei.

Restricţii
Daca solutia nu este un numar intreg se va afisa "multimea vida".
Daca solutia este orice numar din multimea numerelor intregi se va afisa "multimea Z".
-10000000 < a,b < 10000000
O ecuatie de gradul intai are forma a*x+b=0.
Se cer doar solutiile intregi ale ecuatiei date.
Exemplu
ecuatie1.in
6 12
ecuatie1.out
-2
*/


#include <fstream>
using namespace std;

ifstream cin("ecuatie1.in");
ofstream cout("ecuatie1.out");

int main(){
    int a,b;
    cin >> a >> b;
    if(a==0 && b==0) cout << "multimea Z";
    else if(a==0 && b!=0) cout << "multimea vida";
    else if(-b%a==0) cout << -b/a;
    else cout << "multimea vida";

    return 0;
}
