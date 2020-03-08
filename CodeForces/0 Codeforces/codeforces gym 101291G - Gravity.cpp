#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,q,w;
    bool k;
    string wq[53];
    scanf("%d %d",&q,&w);
    for(g=0;g<q;g++)
        cin>>wq[g];
    for(g=0;g<w;g++){
        for(f=q-1;f>=0;f--){
            if(wq[f][g]=='o'){
                k=true;
                wq[f][g]='.';
                for(h=f+1;h<q;h++){
                    if(wq[h][g]=='#'||wq[h][g]=='o'){
                        wq[h-1][g]='o';
                        k=false;
                        break;
                    }
                }
                if(k)wq[h-1][g]='o';
            }
        }
    }
    for(g=0;g<q;g++)
        cout<<wq[g]<<endl;
    return 0;
}
