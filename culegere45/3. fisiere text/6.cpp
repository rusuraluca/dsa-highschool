#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int a, b, ok, cpy, cif;
    in >> a >> b;
    for(int i=a; i<=b; i++){
        ok = 1;
        cpy = i;
        cif = cpy % 10;
        cpy /= 10;
       
        while(cpy){
            if(cpy % 10 != cif){
                ok = 0;
            }
            cpy/=10;
        }
        
        if(ok == 1) cout << i << " "; 
    }
    
    return 0;
}