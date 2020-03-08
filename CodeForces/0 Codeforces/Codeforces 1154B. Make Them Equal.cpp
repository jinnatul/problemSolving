#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105

bool check[size1];

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    memset(check, false, sizeof(check));

    sc1(num);

    vector <ll> vc;

    ll mi = INT_MAX, mx = 0, x;
    for(ll i = 0; i < num; i++){
        sc1(x);
        if(check[x] == false){
            check[x] = true;
            vc.push_back(x);
        }
    }

    if(vc.size() > 3) return cout << "-1" << endl,0;

    sort(vc.begin(), vc.end());

    if(vc.size() == 1){
        return cout << "0" << endl, 0;
    }
    if(vc.size() == 2){
        ll sum = abs(vc[0] - vc[1]);
        if(sum & 1){
            return cout << sum << endl, 0;
        }
        else{
            return cout << sum / 2 << endl, 0;
        }
    }

    ll dif = vc[2] - vc[0];

    if(dif % 2 == 0 && (dif / 2 + vc[1]) == vc[2]){
        cout << dif/2 << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}



OR



#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105


int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    set <ll> st;

    sc1(num);

    vector <ll> vc;

    ll x;
    for(ll i = 0; i < num; i++){
        sc1(x);
        st.insert(x);
    }

    for(auto it = st.begin(); it != st.end(); it++){
        vc.push_back(*it);
    }

    if(vc.size() > 3) return cout << "-1" << endl,0;


    if(vc.size() == 1){
        return cout << "0" << endl, 0;
    }
    if(vc.size() == 2){
        ll sum = abs(vc[0] - vc[1]);
        if(sum & 1){
            return cout << sum << endl, 0;
        }
        else{
            return cout << sum / 2 << endl, 0;
        }
    }

    ll dif = vc[2] - vc[0];

    if(dif % 2 == 0 && (dif / 2 + vc[1]) == vc[2]){
        cout << dif/2 << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}
