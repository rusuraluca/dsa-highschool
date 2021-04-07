#include <fstream>
using namespace std;

ifstream cin("maxnr.in");
ofstream cout("maxnr.out");

int main(){
    int n, fr[101]={0};
    cin >> n;
    
    while(n>0){
        fr[n%10]++;
        n=n/10;
    }
    
    for(int i=9; i>=0; i--)
        for(int j=1; j<=fr[i]; j++)
            cout << i;
            
    return 0;
}