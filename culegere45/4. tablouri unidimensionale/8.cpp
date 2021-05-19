#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int main() { 
    int n, x, v[100], maxx=0;
    cin >> n;
    for(int i=1; i<=n; i++) 
        cin >> v[i];
    cin >> x;
    
    for(int i=1; i<=n; i++){
        if(v[i] <= x && v[i]>=maxx){
            maxx=v[i];
        }
    } 

    cout << maxx << " ";
   
    return 0;
}