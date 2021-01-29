#include <cstring>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main(){
    //sec1 incepe cu nr negativ
    //sec2 se termina cu nr negativ
    //sec 1 nr toate numerele

    int x, sec = 0, sec1 = 0, sec2 = 0;
    bool ok = 0;
    
    while(fin>>x){
        sec++;  
        if(x < 0){
            //incepe un alt sir
            ok = 1;
            //se incheie un sir
            sec2 = sec;
        }
        //daca ok e true si am inceput al sir
        if(ok == 1){
            //crestem sec
            sec1++;
        }
    }    
    if(sec2 < sec1)
        cout << sec1 << " ";
    else
        cout << sec2 << " ";
}