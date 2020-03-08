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

ll save[100][100], big_cnt[100];

int main()
{

    ll m, tc, num, t = 1;

    string arr;

    for(ll i = 0; i < 5; i++){
        cin >> arr;
        if(arr[1] == '<'){
            save[arr[0] - 'A'][arr[2] - 'A']++;
            big_cnt[arr[2] - 'A']++;
        }
        else{
            save[arr[2] - 'A'][arr[0] - 'A']++;
            big_cnt[arr[0] - 'A']++;
        }
    }

    queue <ll> qu;
    for(ll i = 0; i < 5; i++){
        if(!big_cnt[i]){
            //cout << i << endl;
            qu.push(i);
        }
    }

    string ans = "";
    while (!qu.empty()){

        ll now = qu.front();
        ans += (now + 'A');
        qu.pop();

        for(ll i = 0; i < 5; i++){
            if(save[now][i] == 1){
                big_cnt[i]--;
                if(!big_cnt[i]){
                    qu.push(i);
                }
            }
        }
        //cout << ans << endl;
    }

    if(ans.size() == 5)
        cout << ans << endl;
    else
        cout << "impossible" << endl;

}
