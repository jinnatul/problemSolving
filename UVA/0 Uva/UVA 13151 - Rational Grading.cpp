#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 12
#define pb push_back


ll save[mx], arr[mx];
int main()
{

    ll k, prime, m, t = 4;

    char arr[1500];
    int num, tc;

    while (scanf("%s %d", arr, &tc) == 2 && tc != 0){

        if(arr[0] == '0' && arr[1] == 'x') sscanf(arr, "%x", &num);
        else if(arr[0] == '0') sscanf(arr, "%o", &num);
        else sscanf(arr, "%d", &num);

        //cout << num << " " << tc << endl;

        ll ans = 0;
        while (tc--){

            string str;
            ll xx;
            cin >> str >> xx;

            if(str == "i"){
                if(num == xx){
                    ans++;
                }
                else{
                    num = xx;
                }
            }
            else if(str == "++i"){
                ++num;

                if(num == xx){
                    ans++;
                }
                else{
                    num = xx;
                }
            }
            else if(str == "i++"){

                if(num == xx){
                    ans++;
                }
                else{
                    num = xx;
                }
                num++;
            }
            else if(str == "i--"){

                if(num == xx){
                    ans++;
                }
                else{
                    num = xx;
                }
                num--;
            }
            else if(str == "--i"){

                --num;
                if(num == xx){
                    ans++;
                }
                else{
                    num = xx;
                }
            }
        }

        cout << ans << endl;

    }

}
