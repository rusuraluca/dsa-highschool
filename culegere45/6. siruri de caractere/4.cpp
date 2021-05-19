#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("cuvinte.in");
ofstream cout("cuvinte.out");

char linie[40], prima[40], ultima[40];
int n;

int main(){
    cin >> n;
    cin >> linie;
    strcpy(prima, linie);
    strcpy(ultima, linie);
    
    for(int i=1; i<n; i++){
        cin >> linie;
        if(strcmp(linie, prima) < 0){
            strcpy(prima, linie);
        }
        if(strcmp(linie, ultima) > 0){
            strcpy(ultima, linie);
        }
    }

    cout << prima << '\n' << ultima;
   
    return 0;
}