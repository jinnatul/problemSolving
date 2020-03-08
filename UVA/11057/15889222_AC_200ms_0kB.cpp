#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<pair<ll, ll> >vc;

int main()
{
    ll n,m,i,j,ck=2e5;

    while(scanf("%lld", &n)!= EOF){
        ll arr[n];
        for(i=0; i<n; i++){
                scanf("%lld", &arr[i]);
        }
        cin>>m;

        sort(arr, arr+n);
        ll rr=0,cc=0;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if((arr[i]+arr[j])==m){
                    vc.push_back(make_pair(arr[i], arr[j]));
                }
            }
        }

        ll xx = abs(vc[0].first - vc[0].second);
        rr = vc[0].first;
        cc = vc[0].second;
        for(i=1; i<vc.size(); i++){
            if(xx > (abs(vc[1].first - vc[1].second))){
                rr = vc[i].first;
                cc = vc[i].second;
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n", rr, cc);
        vc.clear();
        cout<<endl;
    }
}
