#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 1000001

bool check[size1];
vector <ll> prime;

void seive()
{
    memset(check, true, sizeof(check));

    for(ll i = 4; i < size1; i += 2) check[i] = false;

    check[0] = check[1] = false;

    for(ll i = 3; i * i < size1; i+=2){
        if(check[i]){
            for(ll j = i * i; j < size1; j += (2 * i)) check[j] = false;
        }
    }


    for(ll i = 1; i < size1; i++){
        if(check[i]) prime.push_back(i);
    }

}


void solve(ll num)
{
    if (num == 2147483647)
    {
        printf("2147483648\n");
        return;
    }

    ll num1 = num;

    ll ans = 0, cnt = 0;
    for(ll i = 2; i * i <= num1; i++){

        if(num1 % i == 0){
            ll now = 1;
            cnt++;

            while (num1 % i == 0){
                now *= i;
                num1 /= i;
            }
            ans += now;
        }
    }

    if(num1 > 1){
        cnt++;
        ans += num1;
    }

    if(cnt < 2){
        cout << num + 1 << endl;
        return;
    }

    cout << ans << endl;
}

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

     while(cin >> num && num) {

         cout << "Case " << t++ << ": ";

         if(num == 1){
             cout << 2 << endl;
             continue;
         }

         ll ans = 0, now, fact = 0;

         solve(num);
     }

    return 0;
}
