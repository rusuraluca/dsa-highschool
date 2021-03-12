#include <fstream>

using namespace std;

ifstream cin("adunare.in");
ofstream cout("adunare.out");

int a,b;

int main(){
    cin >> a >> b;
    cout << a + b;
    return 0;
}