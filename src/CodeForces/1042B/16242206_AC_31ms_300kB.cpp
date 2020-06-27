#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define sc3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define pf3(a,b,c) printf("%lld %lld %lld\n",a,b,c)


#define mx 1001000
#define mod 10000007

vector<ll>vc;

int main()
{

    ll n,m,t=0,i,j,ck=0,dk,a,b,c,ab,ac,bc,abc;
    sc1(m);
    a = b = c = ab= ac= bc=abc=mx;
    while(m--){
        string arr;
        ll first=0,sec=0,trd=0;
        cin>>n>>arr;
        for(i=0; i<arr.size(); i++){
            if(arr[i]=='A') first++;
            else if(arr[i]=='B') sec++;
            else trd++;
        }

        if(first && sec && trd) abc = min(abc, n);
        else if(first && sec) ab = min(ab, n);
        else if(first && trd) ac = min(ac, n);
        else if(sec && trd) bc = min(bc, n);
        else if(first) a = min(a, n);
        else if(sec) b = min(b, n);
        else c = min(c, n);
    }

      vc.push_back(abc);
      vc.push_back(a+bc);
      vc.push_back(b+ac);
      vc.push_back(c+ab);
      vc.push_back(ab+bc);
      vc.push_back(ab+ac);
      vc.push_back(bc+ac);
      vc.push_back(a+b+c);

      sort(vc.begin(), vc.end());

      if(vc[0]<mx) cout<<vc[0]<<endl;
      else cout<<"-1"<<endl;

}
