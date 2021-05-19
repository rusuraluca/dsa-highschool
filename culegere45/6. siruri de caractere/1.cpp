#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("sir.in");
ofstream cout("sir.out");

char t[201], c[21];
int nr=0, j;
int main(){
    cin.getline(t, 201);
    cin.getline(c, 21);
    
    for(int i=0; i<strlen(t); i++){
        if(t[i] == c[0] && (i == 0 || t[i-1] == ' ')){
            nr++;
            j=i+1;
            while(t[j] != ' ' && j < strlen(t))
                j++;
            strcpy(t+i, t+j); //elimin cuv cu prefix
        }
    }

    cout << t << '\n' << nr << '\n';
   
    return 0;
}