#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int main() { 
    int n, v[100];
    cin >> n;
    for(int i=1; i<=n; i++) 
        cin >> v[i];

    for(int i=1; i<=n; i++){
        if(v[i] == v[i+1]){
            for(int j=i; j<=n; j++){
                v[j] = v[j+1];
            } 
            n--;
        }
    } 

    for(int i=1; i<=n; i++){
        cout << v[i] << " ";
    }
   
    return 0;
}