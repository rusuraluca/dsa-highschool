/*
Centru Prim
Să se spună dacă un număr citit, n este centru prim. Un număr este centru prim dacă după eliminarea primei cifre şi a ultimei cifre numărul rămas este un număr prim.

Date de intrare
Fişierul de intrare centruprim.in conţine un singur număr, n.

Date de ieşire
În fişierul de ieşire centruprim.out se va scrie cifra 1 dacă numărul este centru prim, 
sau cifra 0 în caz contrar.

Restricţii
100 ≤ n ≤ 2000000000
Exemple
centruprim.in		
237
centruprim.out
1
Explicaţii
237 este centru prim deoarece eliminînd prima şi ultima lui cifră
obţinem 3 care este număr prim.
*/


#include <fstream>
using namespace std;

ifstream cin("centruprim.in");
ofstream cout("centruprim.out");

int prim(int x){
    if(x == 2)
        return 1;
    else if(x < 2 || x % 2 == 0)
        return 0;

    for(int d = 3; d <= x/2; d++)
        if(x % d == 0){
            return 0;
            break;
        }

    return 1;
}

int main(){
    int n;
    cin >> n;
    n/=10;
    
    int cpy = n, p = 1;
    while(cpy > 9){
        p *= 10;
        cpy /= 10;
    }

    n = n % p;
    
    if(prim(n)) cout << 1;
    else cout << 0;
    

    return 0;
}
