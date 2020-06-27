#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100005
#define mod 10000007

bool check(ll n, ll m)
{
    map<ll, ll>mp;
    map<ll, ll>::iterator it;

    ll ck = 0, ck1 = 0;

    while(n!=0){
        mp[n%10]++;
        n/=10;
    }

    while(m!=0){
       mp[m%10]++;
       m/=10;
    }

    if(mp.size()!=10) return false;

    for(it = mp.begin(); it!= mp.end(); it++){
        if(it->second != 1)  return false;
    }
    return true;

}

int main()
{
    //freopen ("input.txt", "r", stdin);
    ll tc, n, count1 = 0, big,small;

    while(sc1(tc)){
        if(tc == 0) break;

        count1++;
  if (count1 > 1)
   printf("\n");
        bool ans = false;
        for(ll fghij = 1234; fghij <= 99999; fghij++){
            ll abcde = fghij*tc;
            if(abcde > 99999 ) break;

            if(abcde < 10000)
                big = abcde * 10;
            else
                big = abcde;
            if(fghij < 10000)
                small = fghij * 10;
            else
                small = fghij;

            if(check(big, small)){

                if(abcde < 10000)
                    printf("0%lld / %lld = %lld\n", abcde, fghij, tc);
                else if(fghij < 10000)
                    printf("%lld / 0%lld = %lld\n", abcde, fghij, tc);
                else
                    printf("%lld / %lld = %lld\n", abcde, fghij, tc);
                ans = true;
            }
        }
        if(ans == false)
            printf("There are no solutions for %lld.\n", tc);

    }

}