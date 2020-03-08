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
    int W, H, x, y, r;
    while(scanf("%d%d%d%d%d", &W, &H, &x, &y, &r)!=EOF){
        if((x+r)>W || (x-r)<0 || (y+r)>H || (y-r)<0 || x<0 || y<0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
