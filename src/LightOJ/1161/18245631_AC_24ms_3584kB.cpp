#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 1000000007
#define PI acos(-1.0)

#define size1 10010

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll savenum[size1];

vector <ll> vc[size1];

ll NCR4(ll num){
    return num * (num - 1) * (num - 2) * (num - 3) / 24;
}


int main()
{
    ll tc, num, t = 1;

    // freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(tc);


    for(ll i = 1; i < size1; i++){
        for(ll j = i; j < size1; j += i)
           vc[j].push_back(i);
    }

    while (tc--){

        sc1(num);

        memset(savenum, 0, sizeof(savenum));

        for(ll i = 1; i <= num; i++) {

            ll now;
            sc1(now);

            for(ll j = 0; j < vc[now].size(); j++){
                savenum[vc[now][j]]++;
            }
        }

        ll ans = 0;
        for(ll i = size1 - 1; i > 0; i--){
           savenum[i] = NCR4(savenum[i]);

           for(ll j = i + i; j < size1; j += i)
               savenum[i] -= savenum[j];
        }

        cout << "Case " << t++ << ": " << savenum[1] << endl;
    }

    return 0;
}