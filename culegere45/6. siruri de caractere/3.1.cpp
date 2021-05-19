#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("sir.in");
ofstream cout("sir.out");

char s[255], t[255];
int nr, j;

int main(){
    cin.getline(s, 255);
    cin.getline(t, 255);
    
    for(int i=0; i<strlen(s); i++){
        if(isdigit(s[i])){ 
            nr = nr*10 + (s[i]-'0');
        }
    }
    for(int i=0; i<strlen(t); i++){
        if(isdigit(t[i])){ 
            nr = nr*10 + (t[i]-'0');
        }
    }

    cout << nr << '\n';
   
    return 0;
}