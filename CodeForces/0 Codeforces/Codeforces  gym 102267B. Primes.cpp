#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 100000007
#define PI acos(-1.0)

#define mx1 10000005

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};


bool checkprime[mx1];

void sieve() {

    ll n,i,j;

    memset(checkprime, true, sizeof(checkprime));

    for(i=4; i<mx1; i+=2) checkprime[i] = false;

    for(i=3; i*i<=mx1; i+=2){
        if(checkprime[i]==true){
            for(j=i*i; j<mx1; j+=(i+i)) checkprime[j] = false;
        }
    }

    //for(i=2; i<mx1; i++) if(!checkprime[i]) prime.push_back(i);
}

int main()
{
    ll num, m, tc, t = 1;

    sieve();

    sc1(num);

    bool ck = false;

    for(ll i = 2; i <= num; i++){
        ll mid = num - i;

        if(checkprime[i] && checkprime[mid] && i >= 2 && mid >= 2){
            cout << i << " " << mid << endl;
            ck = true;
            break;
        }
    }

    if(ck == false) cout << "-1" << endl;
}
