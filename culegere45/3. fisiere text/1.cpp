#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int cmmdc(int a, int b){
    if(b==0) return a;
    return (b, a % b);
}

int main(){
    int n, a, b;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >>  a >> b;
        int d = cmmdc(a, b);
        //cmmdc
        cout << d << " ";
        //cmmmc
        cout << (a * b) / d;
    }
    
    return 0;
}
