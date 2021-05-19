#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int f[100];

int main() { 
    int x;
    while(cin >> x){
        f[x]++;
    }
    for(int i=0; i<=99; i++){
        if(f[i])
            cout << i << " ";
    }
   
    return 0;
}