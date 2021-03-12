#include <fstream>

using namespace std;

ifstream cin("fractii.in");
ofstream cout("fractii.out");

long long rez;
int cnt[1000000];

int main(){
    int n;
    cin >> n;

    for(int i = 2; i <= n; i++){
        cnt[i] = i - 1 - cnt[i];
        for(int j = 2; j*i <= n; j++)
            cnt[i*j] = cnt[i] + cnt[i*j];
    }

    for(int i = 2; i <= n; i++)
        rez = rez + (long long)cnt[i] * 2;
    rez++;

    cout << rez;

    return 0;
}