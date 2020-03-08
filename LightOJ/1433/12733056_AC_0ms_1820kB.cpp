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
#include<stack>]


using namespace std;


int main()
{
     double a,b,c,ox,oy,ax,ay,bx,by,r,r2,r3,ck=0,j;
     int i,n;
     scanf("%d",&n);
     for(i=1; i<=n; i++){
        scanf("%lf %lf %lf %lf %lf %lf", &ox, &oy, &ax, &ay, &bx, &by);
        r = sqrt(((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay)));

      //  r2 = sqrt(((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by)));

        c = sqrt(((ax-bx)*(ax-bx)) + ((ay-by)*(ay-by)));

        a = acos((r*r+r*r - c*c)/(2*r*r));

        ck = (a*r);

        printf("Case %d: %.9lf\n",i,ck);


     }

}
