#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native"
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 300005

ll num, arr[size1], z;

bool check(ll mid){

    ll midpos = num - mid;

    for(ll i = 0; i < mid; i++){
        if(arr[midpos] - arr[i] < z) return false;
        midpos++;
    }
    return true;
}

int main() {

    //seive();
    //preCal();

    ll tc, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc2(num, z);

    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
    }

    sort(arr, arr + num);

    ll left = 0, right = num / 2;

    while (left <= right){

        ll mid = (left + right) >> 1;

        if(check(mid)) left = mid + 1;
        else right = mid - 1;
    }

    pf1(right);

    return 0;
}
