#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

int main()
{
    ll tc, t = 0, n, s;

    while (cin >> tc){
        if(tc == 0) break;
        t++;
        if(t > 1) cout << endl;

        ll arr[tc];

        for(ll i = 0; i < tc; i++) sc1(arr[i]);

        for(ll i = 0; i < tc-5; i++){
            for(ll j = 1; j < tc-4; j++){
                for(ll k = 2; k < tc-3; k++){
                    for(ll s = 3; s < tc-2; s++){
                        for(ll s1 = 4; s1 < tc-1; s1++){
                            for(ll s2 = 5; s2 < tc; s2++){
                                if(arr[i] < arr[j] && arr[j] < arr[k] && arr[k] < arr[s] && arr[s] < arr[s1] && arr[s1] < arr[s2])
                                    cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[s] << " " << arr[s1] << " " << arr[s2] << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}