#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("sir.in");
ofstream cout("sir.out");

char t[55], aux[21], unu[]="unu", doi[]="doi";
int nr, j;

int main(){
    cin.getline(t, 55);
    
    for(int i=0; i<strlen(t); i++){
        if(t[i] == '1'){
            //retin in sirul aux aux elementele dupa nr 1
            strcpy(aux, t+i+1);
            //adaug in t cuvantul unu din sirul cu acelasi nume
            strcpy(t+i+1, unu);
            //concatenez sirul t cu sirul aux
            strcat(t, aux);
           
        }else if(t[i] == '2'){
            //retin in sirul aux aux elementele dupa nr 2
            strcpy(aux, t+i+1);
            //adaug in t cuvantul doi din sirul cu acelasi nume
            strcpy(t+i+1, doi);
            //concatenez sirul t cu sirul aux
            strcat(t, aux);
        }
    }

    cout << t << '\n';
   
    return 0;
}