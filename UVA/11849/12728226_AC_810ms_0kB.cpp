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
    int a, b, i, j,aa,ck;
    while(scanf("%d %d", &a, &b))
    {
        if(a==0 && b==0) break;
        ck=0;
        map<int, int> morol;

        for(i=0; i<a; i++) {
            scanf("%d", &aa);
            morol[aa]=1;
        }

        for(j=0; j<b; j++) {
            scanf("%d", &aa);
            if(morol[aa]==1)
            ck++;
        }
        printf("%d\n", ck);
        morol.clear();
    }
}
