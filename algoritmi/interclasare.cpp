#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n1, n2, v1[105], v2[105];

    cin >> n1;
    for(int i=1; i<=n1; ++i)
        cin >> v1[i];

    cin >> n2;
    for(int i=1; i<=n2; ++i)
        cin >> v2[i];

    sort(v1+1, v1+n1+1);
    sort(v2+1, v2+n2+1);

    /// avem vectorii v1 de n1 elemente si v2 de n2 elemente sortati
    /// vrem sa construim vectorul v3 doar cu elementele pare din ambii vectori
    int i1 = 1;
    int i2 = 1;

    while ( i1 <= n1 && i2 <= n2) { /// mai avem elemente in ambii vectori?
            if ( v1[i1] < v2[i2] ) {          /// altfel daca v1 are elementul cel mai mic 
                cout <<  v1[i1] << " ";                         /// il copiem
                i1++;                                           /// si avansam pe urmatorul element
            } else if ( v1[i1] > v2[i2] ){    /// altfel daca v2 are elementul cel mai mic
                cout <<  v2[i2] << " ";                         /// il copiem
                i2++;                                           /// si avansam pe urmatorul element
            } else if ( v1[i1] == v2[i2] ){   /// daca sunt egale, acest test previne din a afisa de 2 ori elementele incluse in ambii vectori
                cout <<  v2[i2] << " ";
                i1++;
                i2++;                                     
            }  
    }
    
    // in acest moment unul din vectorii v1, v2 este vid
    while ( i1 <= n1 ) { // incercam sa copiem elementele ramase in v1, daca exista
        cout << v1[i1] << " ";
        i1++;
    }
    
    while ( i2 <= n2 ) { // incercam sa copiem elementele ramase in v2, daca exista
        cout << v2[i2] << " ";
        i2++;
    }

    return 0;
}