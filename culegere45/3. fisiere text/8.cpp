#include <iostream>
#include <fstream>

using namespace std;

ofstream out("numere.out");

int main() { 
    int x;
    cin >> x;
    while(x){
        out << x << '\n';
        x /= 10;
    }
    
    return 0;
}