#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("sir.in");
ofstream cout("sir.out");

char s[255], t[255];
int nr;

int main(){
    cin.getline(s, 255);
    cin.getline(t, 255);
    
    for(int i=0; i<strlen(s); i++){
        if (s[i] >= '0' && s[i] <= '9') {
            nr = nr*10 + (s[i]-'0');
        }
    }
    for(int i=0; i<strlen(t); i++){
        if(t[i] >= '0' && t[i] <= '9'){ 
            nr = nr*10 + (t[i]-'0');
        }
    }

    cout << nr << '\n';
   
    return 0;
}