#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000010
#define mod 10000007
#define PI acos(-1.0)


ll first, sec, num;
int used[5], check = 0;
ll position[15];
int arr[5];

void BT(int count, int ans) {

    if (ans == 23 && count == 5) {
            check = 1;
            return;
        }

    for (int i = 0; i < 5; i++) {
           if(!used[i]){
               used[i] = 1;
               BT(count+1, ans + arr[i]);
               BT(count+1, ans - arr[i]);
               BT(count+1, ans * arr[i]);
               used[i] = 0;
           }
        }

}


int main()
{
    int tc, t = 1;

    //freopen ("input.txt", "r", stdin);

    while (scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4])){

        if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0 && arr[3] == 0 && arr[4] == 0 ) break;

        check = 0;
        for(int i = 0; i < 5; i++){
            used[i] = 1;
            BT(1, arr[i]);
            used[i] = 0;
        }
        if(check == 1)
            cout << "Possible" << endl;
       else
            cout << "Impossible" << endl;
    }


    return 0;
}