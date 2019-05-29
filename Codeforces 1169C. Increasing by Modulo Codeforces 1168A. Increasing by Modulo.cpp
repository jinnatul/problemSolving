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

ll num, m, arr[size1], save[size1];

bool check(ll now){

    ll next = m - 1;

    for(ll i = num - 1; i >= 0; i--){
        if(arr[i] <= next){
            if(arr[i] + now >= next) save[i] = next;
            else save[i] = arr[i] + now;
        }
        else{
            if(arr[i] + now >= next + m) save[i] = next;
            else save[i] = (arr[i] + now) % m;
        }
        next = save[i];
    }

    for(ll i = num - 2; i >= 0; i--){
        if(save[i] > save[i + 1]) return false;
    }

    return true;
}

int main() {

    //seive();
    //preCal();

    ll tc, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc2(num, m);

    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
    }

    ll left = 0, right = 3 * m, ans = 0;

    while (left <= right){

        ll mid = (left + right) / 2;
        if(check(mid)){
            right = mid - 1;
            ans = mid;
        }
        else left = mid + 1;
    }

    pf1(ans);

    return 0;
}
