#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 12
#define pb push_back

int main()
{

    ll k, num, prime, m, tc, t = 4;

    sc2(num, tc);

    ll arr[num];

    deque <ll> dq;
    vector <pair <ll, ll> > first, last;

    ll mxx = 0;
    for(ll i = 0; i < num; i++){
       sc1(m);
       dq.push_back(m);
       mxx = max(mxx, m);
    }

    while (dq.front() != mxx){
        ll x = dq.front(); dq.pop_front();
        ll y = dq.front(); dq.pop_front();

        first.push_back({x, y});

        dq.push_front(max(x, y));
        dq.push_back(min(x, y));
    }

    for(ll i = 0; i < num; i++){
        int x = dq.front(); dq.pop_front();
        int y = dq.front(); dq.pop_front();

        last.pb({x, y});

        dq.push_front(max(x, y));
        dq.push_back(min(x, y));
    }


    /* Print First Pair vector
    for(ll i = 0; i < first.size(); i++){
        cout << first[i].first << ' ' << first[i].second << endl;
    }
    cout << endl;

    Print Second Pair vector
    for(ll i = 0; i < last.size(); i++){
        cout << last[i].first << ' ' << last[i].second << endl;
    }
    cout << endl;

    */

    ll cycle = num - 1;

    while (tc--) {
        ll pos;
        sc1(pos);

        if(pos <= first.size()){
            cout << first[pos - 1].first << " " << first[pos - 1].second << endl;
        }
        else{

            pos -= first.size();
            pos -= 1;
            pos %= cycle;

            cout << last[pos].first << " " << last[pos].second << endl;
        }
    }
}
