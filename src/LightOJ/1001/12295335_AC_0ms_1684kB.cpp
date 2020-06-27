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
   int n,i,ln,j,a,b,t,ck;
    cin >> n;
    for(int i = 1; i <= n; i++){
        b = 0;
        cin >> a;
        if(a > 10)
         b = a-10;
        cout << b << " " << a-b <<endl;
    }

}
