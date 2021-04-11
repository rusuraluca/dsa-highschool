#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int x, n=0, ult, poz;
    while(in >> x){
        n++;
        if(x % 5 == 0){
            ult = x;
            poz = n;
        }
    }
    cout << ult << " " << poz;
    
    return 0;
}