#include <fstream>
using namespace std;

ifstream cin("cifre1.in");
ofstream cout("cifre1.out");

int f1[10],f2[10];


int main() {\
    int a,b;
    cin >> a >> b;
    
    while(a) {
        f1[a%10]++;
        a=a/10;
    }

    while(b){
        f2[b%10]++;
        b=b/10;
    }
    
    for(int i=0; i<=9; i++)
        if(f1[i] != 0 && f2[i] != 0) 
            cout << i << " ";
    
    cout<<endl;

    for(int i=9; i>=0; i--)
        for(int j=1; j<=f1[i]+f2[i]; j++)
            cout<<i;

    return 0;
}