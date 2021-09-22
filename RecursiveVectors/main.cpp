#include <iostream>

using namespace std;
int i1=0,i2=0;
void citire(int n,int a[100])
{
    if(n==1)
        cin>>a[n];
    else
    {
        cin>>a[n];
        citire(n-1,a);
    }
}
void afisare(int n, int a[100])
{
    if(n==1)
        cout<<a[n];
    else {
        cout<<a[n]<<" ";
        afisare(n-1,a);

    }
}
void sortare(int n, int a[100],int b[100],int c[100],int &i1,int &i2)
{
    if(n==1)
    {
        if(a[n]%2==0)
            {i1++;
                b[i1]=a[n];
            }
        else {i2++;
                c[i2]=a[n];
        }
    }
    else
    { sortare(n-1,a,b,c,i1,i2);
        if(a[n]%2==0)
            {i1++;
                b[i1]=a[n];
            }
        else {i2++;
                c[i2]=a[n];
        }


    }
}

int main()
{
    int n,a[100],b[100],c[100];
    cin>>n;
    citire(n,a);
    afisare(n,a);
    cout<<endl;
    sortare(n,a,b,c,i1,i2);
     cout<<endl;
    afisare(i1,b);
     cout<<endl;
    afisare(i2,c);
    return 0;
}
