#include <fstream>

using namespace std;

ifstream cin("euclid2.in");
ofstream cout("euclid2.out");

int t, x, y;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    cin >> t;
    while(t--){
        cin >> x >> y;
        cout << gcd(x, y) << '\n';
    }
    return 0;
}