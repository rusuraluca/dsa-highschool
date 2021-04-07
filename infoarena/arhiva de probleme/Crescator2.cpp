#include <fstream>
#include <vector>
using namespace std;

ifstream cin("crescator2.in");
ofstream cout("crescator2.out");

const int MOD = 700001;

inline void add(int& x, int y) { 
    x += y; 
    if (x >= MOD) 
    x -= MOD; 
}
inline void sub(int& x, int y) { 
    x -= y; 
    if (x < 0) 
    x += MOD; 
}

int main() {
    int n; 
    cin >> n;
    
    vector<int> pent(n);
    for (int i=0, j=1; i<n; i++, j=(j > 0 ? -j : -j + 1))
        pent[i] = (3 * j * j - j) / 2;

    vector<int> dp(n + 1);
    dp[0] = 1;

    int sol = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; pent[j] <= i; j++)
            if (j & 2)
                sub(dp[i], dp[i - pent[j]]);
            else
                add(dp[i], dp[i - pent[j]]);
        add(sol, dp[i]);
    }
    
    cout << sol << '\n';

    cout.close();
    return 0;
}