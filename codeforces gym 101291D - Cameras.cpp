#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,q,t,w,re=0,nt=0;
    priority_queue<int>k;
    scanf("%d %d %d",&q,&t,&w);
    int wq[t+3],st[q+3]={0};
    for(g=0;g<t;g++){
        scanf("%d",&wq[g]);
        st[wq[g]]=1;
    }
    for(g=1;g<=w;g++)
        if(st[g])nt++;
        else k.push(g);
    while(nt<2){
        if(!k.empty()){
            re++;
            h=k.top();
            k.pop();
            st[h]=1;
            nt++;
        }
    }
    for(g=w+1;g<=q;g++){
        if(st[g])nt++;
        else k.push(g);
        if(st[g-w])nt--;
        while(nt<2){
            if(!k.empty()){
                re++;
                h=k.top();
                k.pop();
                st[h]=1;
                nt++;
            }
        }
    }
    printf("%d\n",re);
    return 0;
}
