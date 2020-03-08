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

    ll k, prime, m, tc, num, t = 4;

    sc1(tc);

    while (tc--){
        string arr, brr;
        cin >> arr >> brr;

        vector <pair<char, ll> > s, t;

        ll cnt = 1;
        for(ll i = 0; i < arr.size(); i++){
            if(arr[i] == arr[i + 1]) cnt++;
            else{
                s.push_back(make_pair(arr[i], cnt));
                cnt = 1;
            }
        }

        cnt = 1;
        for(ll i = 0; i < brr.size(); i++){
            if(brr[i] == brr[i + 1]) cnt++;
            else{
                t.push_back(make_pair(brr[i], cnt));
                cnt = 1;
            }
        }

        if(s.size() != t.size()){
            cout << "NO" << endl;
            continue;
        }

        bool ck = true;
        for(ll i = 0; i < s.size(); i++){
            if(s[i].first == t[i].first && s[i].second <= t[i].second) continue;
            else {
                cout << "NO" << endl;
                ck = false;
                break;
            }
        }

        if(ck == true) cout << "YES" << endl;
    }
}
