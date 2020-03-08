#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int n,t,i,a,b,c,sum,max,j;

    cin>>n;

    for(i=1; i<=n; i++){
        cin>>a >> b >>c;

        if(b>a && a>c || b<a && a<c){
            
            printf("Case %d: %d\n",i, a);
        }
        else if(a>b && b>c || a<b && b<c){

             printf("Case %d: %d\n",i, b);
        }
        else if(a>c && c>b || a<c && c<b){

             printf("Case %d: %d\n",i, c);
        }
    }


}

