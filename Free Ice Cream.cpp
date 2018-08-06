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

__int64 n, t, a, ck=0;
char aa;

int main(){

     cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> aa >> a;
        if (aa == '+') {
            t += a;
        } else if (a <= t) {
            t -= a;
        } else {
            ck++;
        }
    }
    cout << t << " " << ck;
}