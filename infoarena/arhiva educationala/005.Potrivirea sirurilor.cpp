#include <fstream>
#include <string.h>
#include <vector>

using namespace std;

ifstream cin("strmatch.in");
ofstream cout("strmatch.out");

const int maxn = 2000005;

char a[maxn], b[maxn];
int n, pi[maxn], m, k;
vector <int> matches;

int main() {

	cin >> a+1 >> b+1;
	n = strlen(a+1);
	m = strlen(b+1);

	k = 0;
	for(int i=2; i<=n; ++i) {
		while(k > 0 && a[k+1] != a[i])
			k = pi[k];
		if(a[k+1] == a[i])
			++k;
		pi[i] = k;
	}
	
	k = 0;
	for(int i=1; i<=m; ++i) {
		while(k > 0 && a[k+1] != b[i])
			k = pi[k];
		if(a[k+1] == b[i])
			++k;
		if(k == n)
			matches.push_back(i-n);
	}
	
	cout << matches.size() << '\n';
	for(int i=0; i < min(1000, int(matches.size())); ++i)
		cout << matches[i] << ' ';
}