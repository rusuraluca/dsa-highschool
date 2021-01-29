/*
Se citesc n şi p. Să se genereze toate aranjamentele de n luate câte p. Implementare recursiva.
*/

#include <iostream>

using namespace std;

int st[21],n,p;

void init()
{
    int i;
    cout<<"n=";
    cin>>n;
    cout<<"p=";
    cin>>p;
    for(i=1;i<=n;i++)
        st[i]=0;
}

void tipar(int k)
{
    int i;
    for (i=1;i<=k;i++)
        cout<<st[i];
    cout<<endl;
}

int valid(int k)
{
    int i,ok;
    ok=1;
    for(i=1;i<k;i++)
        if (st[i]==st[k])
            ok=0;
    return ok;
}

void back(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        st[k]=i;
        if (valid(k))
            if(k==p)
                tipar(k);
			else
                back(k+1);
     }
}

int main()
{
    init();
    back(1);
    return 0;
}
