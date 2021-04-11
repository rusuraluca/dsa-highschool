#include <fstream>
using namespace std;

ifstream cin("exponent.in");
ofstream cout("exponent.out");

int main(){
    int n, k, exp=0, j;

    cin >> n >> k;

    for(int i=1; i<=n; i++){
        j = i;
        while(j%k == 0){
            exp++;
            j/=k;
        }
    }

    cout << exp;

    return 0;
}