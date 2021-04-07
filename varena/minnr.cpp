#include <fstream>
using namespace std;

ifstream cin("minnr.in");
ofstream cout("minnr.out");

int fr[10];

int main() {
    int n, rez;
    cin >> n;
    
    while(n){
        fr[n%10]++;
        n=n/10;
    }
    
    for(int i=1; i<=9; i++)
        if(fr[i] != 0) {
            fr[i]--;
            rez=i; break;
        }
        
    for(int i=0; i<=9; i++)
        for(int j=1; j<=fr[i]; j++)
            rez = rez*10 + i;

    cout << rez;

    return 0;
}