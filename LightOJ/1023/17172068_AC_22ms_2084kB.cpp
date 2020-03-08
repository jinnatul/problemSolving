#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

ll arr[30];

int main()
{
    ll tc, t = 1, n, s;

    sc1(tc);

    while (tc--) {
      ll num, pos;
      sc2(num, pos);

      arr[num];

      for(ll i = 0; i < num; i++) arr[i] = i;

      cout << "Case " << t++ << ":" << endl;
      ll ck = 1;

      for(ll i = 0; i < num; i++){
          printf("%c", arr[i] + 'A');
      }
      cout << endl;

      while (next_permutation(arr, arr + num) && ck < pos){
          for(ll i = 0; i < num; i++){
              printf("%c", arr[i] + 'A');
          }
          cout << endl;
          ck++;
      }
    }
    return 0;
}