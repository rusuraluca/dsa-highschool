#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int p[100], u[100];

int main() { 
    int x, n=0;
    while(cin >> x){
        n++;
        if(p[x] == 0){
            p[x] = n;
            u[x] = n;
        }    
        else 
            u[x] = n;
    }
    for(int i=0; i<=99; i++){
        if(p[i])
            cout << i << " " << u[i]-p[i] << endl;
    }
   
    return 0;
}