#include <fstream>
using namespace std;

ifstream cin("cautare1.in");
ofstream cout("cautare1.out");

int main(){
    int n, m, i, j, val, x;
    int fr[1001]={0};
    cin >> n >> m;
    
    for(i=1; i<=n; i++){
        cin >> x;
        if(fr[x] == 0)
        fr[x] = i; 
    }

    for(j=1; j<=m; j++){
        cin >> val;
        if(fr[val]!=0) 
            cout << fr[val] << '\n';
        else 
            cout << 0 << '\n';
    }

    return 0;
}