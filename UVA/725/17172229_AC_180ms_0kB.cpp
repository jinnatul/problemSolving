#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000010
#define mod 10000007
#define PI acos(-1.0)

bool check(ll abcde, ll fghij)
{
    map <ll, ll>mp;
    map <ll, ll>::iterator it;

    while (abcde !=0 ){
        mp[abcde%10]++;
        abcde/=10;
    }

    while (fghij !=0 ){
        mp[fghij%10]++;
        fghij/=10;
    }

    if(mp.size() != 10) return false;

    for(it = mp.begin(); it!= mp.end(); it++){
        if(it->second != 1) return false;
    }
    return true;
}

int main()
{
    ll tc, t = 0, n, a, b, c;

    while (cin >> tc){

        if(tc == 0) break;
        t++;
        if(t > 1) cout << endl;

        ll big, small;
        bool ans = false;

        for(ll fghij = 1234; fghij <= 99999; fghij++){
            ll abcde = fghij*tc;
            if(abcde > 99999) break;

            big = abcde;
            small = fghij;

            if(fghij < 10000) {
                small = fghij * 10;
                big = abcde;
            }
            if(abcde < 10000) {
                small = fghij;
                big = abcde * 10;
            }

            if(check(small, big)){
                if(fghij < 10000)
                    cout << abcde << " / 0" << fghij << " = " << tc << endl;
                else if(abcde < 10000)
                    cout << "0"<< abcde << " / " << fghij << " = " << tc << endl;
                else
                    cout <<  abcde << " / " << fghij << " = " << tc << endl;
                ans = true;
            }
        }
       if(!ans)
          cout << "There are no solutions for " << tc << "." << endl;

    }

    return 0;
}