#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int main() { 
    int x, n=0, v[105], aux;
    while(cin >> x){
        n++;
        v[n]=x;
    }
    for(int i=1; i<n; i++){
        for(int j=i; j<=n; j++){
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }    
    }
    for(int i=1; i<=n; i++){
        cout << v[i] << " ";
    }
   
    return 0;
}