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

#define size1 998244353
#define pb push_back

map <int, int> mp;
vector <int> vc;

int main()
{

    int m, tc, num, t = 1;

    cin >> num;

    for(int i = 0; i < num; i++){
        int x;
        cin >> x;
        vc.push_back(x);
        mp[x] = i + 1;
    }

    sort(vc.begin(), vc.end());

    //first
    int dif = vc[2] - vc[1];
    bool ck = true;

    for(int i = 3; i < num; i++){
       if(vc[i] - vc[i - 1] != dif){
           ck = false;
           break;
       }
    }
    if(ck)
        return cout << mp[vc[0]] << endl,0;

    //second
    dif = vc[2] - vc[0];
    ck = true;

    for(ll i = 3; i < num; i++){
        if(vc[i] - vc[i - 1] != dif){
            ck = false;
            break;
        }
    }
    if(ck)
        return cout << mp[vc[1]] << endl,0;


    //next
    dif = vc[1] - vc[0];
    int pos = -1, ansPos = 0, cnt = 0;

    for(int i = 2; i < num; i++){
        if(i - 1 == pos){
            if(vc[i] - vc[i - 2] != dif){
                pos = i;
                ansPos = vc[i];
                cnt++;
            }
        }
        else if(vc[i] - vc[i - 1] != dif){
            pos = i;
            ansPos = vc[i];
            cnt++;
        }

        if(cnt > 1) return cout << -1 << endl, 0;
    }

    cout << mp[ansPos] << endl;

}
