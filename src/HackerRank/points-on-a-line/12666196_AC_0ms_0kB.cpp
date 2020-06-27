/***
  * Jinnat Morol
***/

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
    int n,x,y;
    cin >> n;
    set<int> xx, yy;
    for(int i = 0; i < n; i++){

        cin >> x >> y;
        xx.insert(x);
        yy.insert(y);
    }
    if(xx.size() == 1 || yy.size() == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

}
