#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int i,a,b,c,d,e,f,n;
    cin>>n;

    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        d = a*a ;
        e = b*b;
        f = c*c;

        if((d+e == f) || (d + f == e) || (f + e == d)){
            printf("Case %d: yes\n", i);
        }
        else{

           printf("Case %d: no\n", i);
        }
    }

  
}

