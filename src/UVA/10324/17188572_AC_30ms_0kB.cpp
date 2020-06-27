#include <bits/stdc++.h>
#define sc(a)   scanf("%d",&a)
#define sc2(a,b)    scanf("%d %d",&a,&b)
#define pf(a)   printf("%d\n",a)

#define Max 1000005
using namespace std;

int main()
{
    string x;
    bool res[Max];
    int pres[Max],s=0,a,b,k=1;
    int q;
    while(cin>>x)
    {
        s=0;
        for(int i=0; x[i]; i++)
        {
            s+=x[i]-'0';
            pres[i]=s;
        }
        cin>>q;
        for(int i=0; i<q; i++){
            cin>>a>>b;
            if(a>b)
            {
                int t=a;
                a=b;
                b=t;
            }
            int ele=b-a+1;
            int sum=pres[b];
            sum=sum-pres[a-1];
            if(sum==0 || sum==ele)
                res[i]=1;
            else
                res[i]=0;
        }
        cout<<"Case "<<k++<<":\n";
        for(int i=1; i<=q; i++)
        {
            if(res[i-1]==1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
