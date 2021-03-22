#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main(){
    int x;
    int nr=0, nr1=0, nr2=0;
    bool ok;
    //nr  retine numarul de numere date 
    //nr1 retine lungimea sirurilor care incep cu un nr poz 
    //nr2 retine lungimea sirurilor care se termina cu un nr poz 
   
    while(fin >> x){
        nr++;
        if(x >= 0){
            ok = 1;
            nr2 = nr;
        }
        if(ok == 1){
            nr1++;
        }
    }

    if(nr2 > nr1) cout << nr2;
    else cout << nr1;
    return 0;
}