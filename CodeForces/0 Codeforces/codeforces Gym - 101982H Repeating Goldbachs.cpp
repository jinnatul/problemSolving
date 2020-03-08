#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<1000010>kk;
vector<int>udd;
void eos(int x)
{
    ll g,h,f;
    kk.set();
    kk[0]=kk[1]=0;
    for(g=2;g<3;g++){
        for(h=2*2;h<=x;h+=2)kk[h]=0;
        udd.push_back(g);
    }
    for(;g<=x;g+=2)if(kk[g]){
        for(h=g*g,f=2*g;h<=x;h+=f)kk[h]=0;
        udd.push_back(g);
    }
}
int main()
{
    int g,h,q,x,z,re=0;
    scanf("%d",&q);
    eos(q+7);
    x=q;
   // printf("%d\n",x);
    while(x>=4){
       // printf("%d\n",x);
        for(h=0;2*udd[h]<=x;h++){
            z=x-udd[h];
          //  printf("%d %d\n",z,udd[h]);
            if(kk[z]){
                re++;
                x=z-udd[h];
                break;
            }
        }
    }
    printf("%d\n",re);
    return 0;
}
