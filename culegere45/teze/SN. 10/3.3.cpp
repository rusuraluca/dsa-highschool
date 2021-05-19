#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int x, nrzr, nrmax, zmax;

int main() {
    // nr de valori egale cu 0 din x! este egal cu 
    // puterea lui 5 in descompunerea in factori primi ai lui x!
    
    while(fin >> x){
        nrzr = 0;
        while(x){
            nrzr += x/5;
            x /= 5;
        }
        
        if(nrzr > nrmax){
            nrmax = nrzr;
            zmax = 1; 
        }else if(nrzr == nrmax) 
            zmax++;
    }
    cout << zmax << " " << nrmax;

    return 0;
}
