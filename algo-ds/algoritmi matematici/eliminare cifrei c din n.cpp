#include <iostream>

using namespace std;


int n,c;

int p(int n, int c)
{
    int result=0,poz=1;

    while(n>0)
    {
        if(n%10!=c)
        {

            result=result+(n%10)*poz;
            poz=poz*10;

        }

        n=n/10;
    }
    return result;
}

int main()
{
    cout<<"n="; cin>>n;
    cout<<"c="; cin>>c;
    cout<<p(n,c);
    return 0;
}
