#include<bits/stdc++.h>
using namespace std;
int q,w;
string wq[53];
void flow(int g,int h)
{
    if(g<0||g==q||h<0||h==w||wq[g][h]=='W')return;
    wq[g][h]='W';
    flow(g,h+1);
    flow(g,h-1);
    flow(g-1,h);
    flow(g+1,h);
}
int main()
{
    int g,h,re=0;
    scanf("%d %d",&q,&w);
    for(g=0;g<q;g++)
        cin>>wq[g];
    for(g=0;g<q;g++){
        for(h=0;h<w;h++){
            if(wq[g][h]=='L'){
                re++;
                flow(g,h);
            }
        }
    }
    printf("%d\n",re);
    return 0;
}
