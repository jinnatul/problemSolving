#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
#define sclli3 scanf("%lld %lld %lld",&a, &b, &c)
#define scf3 scanf("%f %f %f",&a, &b, &c)
#define scd3 scanf("%lf %lf %lf",&a, &b, &c)

using namespace std;

int main()
{
   int n,t,x1,x2,y1,y2,i,ln,j,a,b,ck;
    cin >> n;
    for(i = 1; i <= n; i++){
        cin>>x1>>y1>>x2>>y2;
        printf("Case %d:\n",i);

        cin >> t;
        for(j=1;j<=t;j++){
            cin>>a>>b;
            if((a>=x1 && a<=x2) && (b>=y1 && b<=y2)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }

    }

}
