#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x,re;
    string q,w;
    scanf("%d",&t);
    while(t--){
        cin>>q>>w;
        int nt[30]={0};
        for(g=0;w[g];g++)
            nt[w[g]-'a']++;
        for(g=re=0;q[g];g++){
            x=q[g]-'a';
            if(nt[x])re++,nt[x]--;
            else break;
        }
        printf("%d\n",re);
    }
    return 0;
}
