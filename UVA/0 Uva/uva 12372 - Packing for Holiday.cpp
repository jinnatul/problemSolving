#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int n,i,j,a,b,c;
    cin>> n;

    for(i=1;i<=n;i++){
        cin >> a >> b >> c;
        if(a<21 && b<21 && c<21){
            printf("Case %d: good\n", i);
        }
        else{
            printf("Case %d: bad\n", i);

        }
    }
}
