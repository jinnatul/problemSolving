#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,x,nn,re=-1e9;
    char a;
    string q;
    vector<int>st(55,1);
    cin>>q;
    for(g=1;q[g];g++){
        for(h=0;h<g;h++){
            if(q[h]<q[g])
                st[g]=max(st[g],st[h]+1);
        }
    }
    for(g=0;q[g];g++)
        re=max(re,st[g]);
    printf("%d\n",26-re);
    return 0;
}
