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

bool check(string arr){

    bool ck = true;

    for(ll i = 0; i < arr.size() - 1; i++){
      if(abs(arr[i] - arr[i + 1]) == 1) return false;
    }

    return true;
}

int main() {

    //seive();
    //preCal();

    ll tc, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);


    sc1(tc);

    while (tc--){

        string arr;
        cin >> arr;

        string even = "", odd = "";

        for(ll i = 0; i < arr.size(); i++){
            if(arr[i] & 1) odd += arr[i];
            else even += arr[i];
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        if(check(even + odd)) cout << even + odd << endl;
        else if(check(odd + even)) cout << odd + even << endl;
        else cout << "No answer" << endl;

    }

    return 0;
}
