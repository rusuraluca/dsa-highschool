#include <fstream>

using namespace std;

ifstream cin("euclid3.in");
ofstream cout("euclid3.out");

inline int gcd(int a, int b, int &x, int &y){
	if (b == 0){
		x = 1;
		y = 0;
		return a;
	}
 
	int x0, y0, d;
	d = gcd(b, a%b, x0, y0);
	
	x = y0;
	y = x0 - (a/b)*y0;
	return d;
}

int main() {
    int t;
    cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		
		int d, x, y;
		d = gcd(a, b, x, y);
		
		if (c % d)
			cout << "0 0" << '\n';
		else
			cout << c/(d*x) << " " << c/(d*y) << '\n';
	}
	return 0;
}