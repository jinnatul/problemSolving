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

vector <string> vc;
vector <pair <string , ll> >vcp;

bool com(pair<string, ll>aa, pair<string, ll>bb){
    if(aa.second == bb.second) return aa.first < bb.first;
    return aa.second > bb.second;
}



int main()
{
    ll tc, t = 0, n, a, b, c;

    string arr;

    while (getline(cin, arr)) {

        ll ln = arr.size();
        vc.clear(), vcp.clear();
        string brr = arr;
        vc.push_back(arr);

        ll count = 0;
        while (next_permutation(arr.begin(), arr.end()) && count < 10) {
            vc.push_back(arr);
            count++;
        }

        count = 0;
        while (prev_permutation(brr.begin(), brr.end()) && count < 10) {
            vc.push_back(brr);
            count++;
        }


        ll ans = 0, minnum, chekmin;

        for (ll i = 0; i < vc.size(); i++) {
            minnum = 0, chekmin = INT_MAX;
            string currentstring = vc[i];

            for (ll j = 0; j < currentstring.size() - 1; j++) {
                minnum = abs((currentstring[j] - 'A') - (currentstring[j + 1] - 'A'));
                chekmin = min(chekmin, minnum);
            }

            vcp.push_back(make_pair(currentstring, chekmin));
        }

        sort(vcp.begin(), vcp.end(), com);

        cout << vcp[0].first << vcp[0].second << endl;

    }

    return 0;
}