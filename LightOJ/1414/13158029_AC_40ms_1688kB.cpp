#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>


using namespace std;

int main()
{
     long long int n,i,j,ck=0,y1,y2,d1,d2,b=0,c=0,d=0;
     char a;
     string m1,m2;
     cin>>n;

     for(i=1; i<=n; i++){
        cin>>m1>>d1>>a>>y1;
        cin>>m2>>d2>>a>>y2;
        if(m1=="January" || m1=="February"){
            y1=y1;
        }
        else{
            y1++;
        }
        if(m2=="January" ||(m2=="February" && d2<29)){
            y2--;
        }

        b =  ((y2/4)-((y1-1)/4));
        c =  ((y2/100) - ((y1-1)/100));
        d =  ((y2/400) - ((y1-1)/400));

        ck = (b-c+d);

        printf("Case %lld: %lld\n",i,ck);
        ck=0;
     }

}
