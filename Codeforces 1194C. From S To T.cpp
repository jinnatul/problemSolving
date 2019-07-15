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
 
#define size1 1000
#define pb push_back
 
string aa, bb, cc;
 
bool find_ch(char ch)
{
    for(ll i = 0; i < cc.size(); i++){
        if(cc[i] == ch){
            cc.erase(cc.begin() + i);
            return true;
        }
    }
 
    return false;
}
 
int main()
{
 
    ll k, num, m, tc, t = 1;
 
    sc1(tc);
 
    while (tc--){
 
        cin >> aa >> bb >> cc;
 
        ll ln1 = aa.size();
        ll ln2 = bb.size();
        ll ln3 = cc.size();
 
        if(ln1 > ln2){
            cout << "NO" << endl;
            continue;
        }
        else if(ln1 == ln2 && aa != bb){
            cout << "NO" << endl;
            continue;
        }
 
        for(ll i = 0; i < ln2; i++){
            if(aa[i] == bb[i]) continue;
            else {
                string nowaa = "";
                if(find_ch(bb[i])){
                    nowaa += aa.substr(0, i);
                    nowaa += bb[i];
                    for(ll j = i; j < aa.size(); j++) nowaa += aa[j];
                    //cout << "in " << aa << " " << nowaa << endl;
                }
                aa = nowaa;
            }
        }
 
 
        if(aa == bb) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
