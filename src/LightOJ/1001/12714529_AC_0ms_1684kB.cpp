/***
  * Jinnat Morol id : 171-35-1957
  * Date : 12/02/2018
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
    int t,aa,bb;
    cin >> t;
    for(int i = 1; i <= t; i++){
        bb = 0;cin >> aa;
        if(aa > 10)
        bb = aa-10;
        cout << bb << " " << aa-bb << '\n';
    }
}
