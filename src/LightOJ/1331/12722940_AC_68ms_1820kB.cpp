#include<bits/stdc++.h>
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


using namespace std;


int main()
{
     double a,b,c,r1,r2,r3,s,S,x,y,z,S1,ck;
     int n,i,j,k,t;
     cin>>n;
     for(i=1; i<=n; i++){
        cin>>r1>>r2>>r3;
        a = r1+r2;
        b = r2+r3;
        c = r3+r1;

        s = (a+b+c)/2;
        S = sqrt(s*(s-a)*(s-b)*(s-c));

        //cout<<S<<endl;

        x=acos((b*b+c*c-a*a)/(2*b*c));
        y=acos((a*a+c*c-b*b)/(2*c*a));
        z=acos((a*a+b*b-c*c)/(2*a*b));

        S1= 0.5*((y*r1*r1)+(z*r2*r2)+(x*r3*r3));
        //cout<<S1<<endl;
        ck = S-S1;
        printf("Case %d: %.10lf\n",i,ck);
     }


}
