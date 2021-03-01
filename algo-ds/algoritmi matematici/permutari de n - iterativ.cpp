/*
Se citeşte un număr natural n. Se cere să se afişeze toate permutările mulţimii {1, 2, ..., n}.
Soluţia, ca orice problemă de backtracking liniar, este o stivă. Lungimea stivei este n, iar pe
orice nivel al stivei vom depune elementele distincte ale mulţimii {1,2,...,n}. Pentru a evita
memorarea într-o soluţie a aceleiaşi valori, utilizăm vectorul viz de lungime n, în care viz[i] = 0
dacă i nu a fost pus încă pe stivă şi viz[i]=1 dacă i este deja pe stivă. Aceasta înseamnă că dacă
de exemplu pe stivă am memorat deja valorile 3, 6, 2, atunci în vectorul viz avem viz[3] = 1,
viz[6] = 1, viz[2] = 1, restul componentelor fiind 0. Pentru nivelul 4 al stivei vom putea depune
acum orice valoare i în care viz[i]=0. Implementare iterativa.
*/

#include<iostream>
#include<cmath>

using namespace std;

int st[20],n,k,p;

void init()
{
    st[k]=0;
}

int succesor()
{
    if (st[k]<n)
    {
        st[k]++;
        return 1;
    }
    else
        return 0;
}

int valid()
{
    for(int i=1;i<k;i++)
    if(st[i]==st[k])
        return 0;
    return 1;
}

int sol()
{
    return(k==n);
}

void tipar()
{
    for(int i=1;i<=n;i++)
        cout<<st[i];
    cout<<endl;
}

void bkt()
{
    int as;
    k=1;
    init();
    while(k>0)
    {
        do
        {
        }
        while ((as=succesor()) && !valid());
        if (as)
            if (sol())
                tipar();
            else
            {
                k++;
                init();
            }
        else k--;
    }
}

int main()
{
    cout<<"n=";
    cin>>n;
    bkt();
    return 0;
}
