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

int main()
{
    ll num, m, tc, t = 1;

    int arr[4];

    for(ll i = 0 ; i < 3; i++){
        char ch;
        cin >> num >> ch;

        if(ch == 'm') arr[i] = num + 100;
        else if(ch == 'p') arr[i] = num + 200;
        else arr[i] = num + 300;
    }

    sort(arr, arr + 3);

    if(arr[0] == arr[1] && arr[1] == arr[2]){
        cout << "0" << endl;
    }
    else if(arr[0] + 1 == arr[1] && arr[1] + 1 == arr[2]){
        cout << "0" << endl;
    }
    else if(
            arr[0] == arr[1] || arr[1] == arr[2] ||
            arr[0] + 1 == arr[1] || arr[1] + 1 == arr[2] ||
            arr[0] + 2 == arr[1] || arr[1] + 2 == arr[2]){
        cout << "1" << endl;
    }
    else
        cout << "2" << endl;
}
