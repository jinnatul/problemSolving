#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native"
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 300005


int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    string arr;
    cin >> arr;

    string ans = "";

    ll ln = arr.size();

    ll pos = 0;

    if(arr[0] == 'h'){
        cout << "http://";
        pos = 4;
    }
    else{
        cout << "ftp://";
        pos = 3;
    }

    ll i, j;
    for(i = ln -2; i >= pos; i--){
        if(arr[i] == 'r' && arr[i + 1] == 'u') break;
    }


    for(j = pos; j < i; j++){
        printf("%c",arr[j]);
    }

    cout << ".ru";

    if(j + 2 < ln){
        cout << "/" << arr.substr(j + 2, ln) << endl;
    }
    else{
        cout << endl;
    }

    return 0;
}
