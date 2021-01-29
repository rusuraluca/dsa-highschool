#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, x, y;
    //citim n
    cin >> n;
    //citim primul element al secventei - predecensorul urmatorului nr
    cin >> x;
    //n devine n-1
    n=n-1;
    //cat timp noul n e diferit de 0
    while(n){
        //citim urmatorul nr al secventei
        cin>>y;
        //daca este mai mic decat numarul dinaintea lui
        if(x>y){
            //afisam NU
            cout << "NU";
            //si iesim din program
            return 0;
        }else{
            //daca este mai mare, y devine predecesorul (x) pentru urmatorul y
            x=y;
        }
        //scadem 1 din nr total de nr al secventei
        n=n-1;
    }
    //daca programul ajunge aici atunci elementele sunt in ordine crescatoare
    cout << "DA";
    return 0;
}