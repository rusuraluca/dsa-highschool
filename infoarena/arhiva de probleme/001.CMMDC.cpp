#include <fstream>
 
using namespace std;

ifstream cin("cmmdc.in");
ofstream cout("cmmdc.out");

int gcd(int a, int b){
    if(!b) return a;
    else return gcd(b,a%b);
}

int main(){
    int a,b;
    cin >> a >> b;
    
    int d = gcd(a,b);
    if(d == 1)
        d = 0;
        
    cout << d;
    return 0;
}