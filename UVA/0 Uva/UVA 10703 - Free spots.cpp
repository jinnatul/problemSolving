#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("D:\\Coding\\clion\\output.txt", "w", stdout);

    int w, h, n;
    while (cin >> w >> h >> n && w){

        bool geard[w + 1][h + 1];

        memset(geard, false, sizeof(geard));

        while (n--) {

            int a, b, c, d;
            scanf("%d %d %d %d", &a, &b, &c, &d);
            if(a > c)   swap(a, c);
            if(b > d)   swap(b, d);

            for (int i = a; i <= c; i++) {
                for (int j = b; j <= d; j++)
                    geard[i][j] = true;
            }
        }

        int cnt = 0;
        for(int i = 1; i <= w; i++){
            for(int j = 1; j <= h; j++){
                if(!geard[i][j]) cnt++;
            }
        }

        if(cnt == 0)
            puts("There is no empty spots.");
        else if(cnt == 1)
            puts("There is one empty spot.");
        else
            printf("There are %d empty spots.\n", cnt);

    }

    return 0;
}
