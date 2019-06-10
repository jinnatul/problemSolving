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


int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(num);

    ll x, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0;

    for(ll i = 0; i < num; i++){
        sc1(x);
        if(x == 4) a1++;
        if(x == 8 && a1) a1--, a2++;
        if(x == 15 && a2) a2--, a3++;
        if(x == 16 && a3) a3--, a4++;
        if(x == 23 && a4) a4--, a5++;
        if(x == 42 && a5) a5--, a6++;
    }

    ll ext = num - 6 * a6;

    pf1(ext);

    return 0;
}


OR


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


int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(num);

    ll x, save[100];
    ll arr[6] = {4, 8, 15, 16, 23, 42};

    queue <ll> qt[6];

    save[4] = 0, save[8] = 1, save[15] = 2;
    save[16] = 3, save[23] = 4, save[42] = 5;

    for(ll i = 0; i < num; i++){
        sc1(x);
        qt[save[x]].push(i);
    }

    ll cnt = 0;

    while (true){

        ll before = -1;
        bool ck = true;

        for(ll i = 0; i < 6; i++){
            while (!qt[i].empty() && qt[i].front() < before) qt[i].pop();

            if(qt[i].empty()){
                ck = false;
                break;
            }
            before = qt[i].front();
            qt[i].pop();
        }

        if(ck) cnt += 6;
        else break;
    }

    pf1(num - cnt);

    return 0;
}
