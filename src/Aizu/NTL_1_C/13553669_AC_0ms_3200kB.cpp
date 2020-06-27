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

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long int findlcm(long long int arr[],long long int n)
{
    long long int  ans = arr[0];

    for (long long int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}

 int main()
{
    long long int n,i,j,ck=0;
    cin>>n;
    long long int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];

     printf("%lld\n", findlcm(arr, n));
    return 0;
}


