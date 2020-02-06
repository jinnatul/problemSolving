#include <iostream>
#include <cstdio>
#include <math.h>
 
#define MAX 10000
#define TEST_CASE(t) for(int z=1;z<=t;z++)
#define PRINT_CASE printf("Case %d: ",z)
#define inf 1000000
 
using namespace std;
 
int main()
{
 
    int t;
    cin>>t;
    TEST_CASE(t)
    {
        int n;
        cin>>n;
        int x1,y1,z1,x2,y2,z2;
        int a,b,c,i,j,k;
        a=b=c=0;
        i=j=k=inf;
        while(n--)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            a=max(a,x1);
            b=max(b,y1);
            c=max(c,z1);
            i=min(i,x2);
            j=min(j,y2);
            k=min(k,z2);
        }
        PRINT_CASE;
        if(i>a && j>b && k>c)
            cout<<(i-a)*(j-b)*(k-c)<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
