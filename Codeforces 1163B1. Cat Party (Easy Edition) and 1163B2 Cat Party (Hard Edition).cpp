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


map <ll, ll> mp1, mp2;

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);


    sc1(num);

    ll now, ans = 0;
    for(ll i = 0; i < num; i++){

        sc1(now);

        if(mp1.find(now) != mp1.end()){
            mp2[mp1[now]]--;
            if(mp2[mp1[now]] == 0)
                mp2.erase(mp1[now]);
        }

        mp1[now]++;
        mp2[mp1[now]]++;

        if(mp2.size() == 1 and (mp2.begin()->first == 1 or mp2.begin()->second == 1)){
            ans = i + 1;
        }
        else if(mp2.size() == 2){

            auto it = mp2.begin();
            ll first = it->first;
            ll last = it->second;

            it++;

            ll first2 = it->first;
            ll last2 = it->second;

            if(first == 1 and last == 1){
                ans = i + 1;
            }
            else if(first + 1 == first2 and last2 == 1){
                ans = i + 1;
            }

        }
    }
    
    pf1(ans);

    return 0;
}
