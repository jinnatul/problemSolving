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

#define size1 10005

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll save[size1];

void sieve()
{
    save[1] = 1;
    for(ll i = 2; i <= size1; i++)
        save[i] = i;

    for(ll i = 2; i <= size1; i+=2)
        save[i] = 2;

    for(ll i = 3; i * i <= size1; i++){
        if(save[i] == i){
            for(ll j = i * i; j <= size1; j += i){
                if(save[j] == j)
                    save[j] = i;
            }
        }
    }

}


int main()
{
    ll tc, t = 1;

    sieve();

    while (sc1(tc)) {

        if(tc == -1) break;

        if(t > 1) cout << endl;

        cout << "M(" << tc << ") = ";

        if(tc == 1){
            cout << "1" << endl;
            continue;
        }

        vector <ll> ans;

        while (tc != 1){
            ans.push_back(save[tc]);
            tc /= save[tc];
        }

        sort(ans.begin(), ans.end());

        bool check = true;

        for(ll i = 0; i < ans.size() - 1; i++){
            if(ans[i] == ans[i + 1]){
                check = false;
                break;
            }
        }

        if(check == false)
            cout << "0" << endl;
        else if(ans.size() & 1)
            cout << "-1" << endl;
        else
            cout << "1" << endl;

       t++;
    }

    return 0;
}