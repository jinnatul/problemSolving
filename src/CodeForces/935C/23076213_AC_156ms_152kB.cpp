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

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7

#define size1 100005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    double r, x1, y1, x2, y2;

    cin >> r >> x1 >> y1 >> x2 >> y2;

    double dist = distance(x1, y1, x2, y2);

    if(dist >= r){
        printf("%.17f %.17f %.17f\n", x1,y1,r);
        return 0;
    }

    dist += r;

    for (double i = 0.0; i <= 360.0; i += 0.0001) {
        double curDeg = (i * PI) / 180.0;
        double curx1 = (r * cos(curDeg)) + x1;
        double cury1 = (r * sin(curDeg)) + y1;
        double currDist = distance(curx1, cury1, x2, y2);

        currDist -= dist;
        currDist = abs(currDist);

        if(currDist <= eps){
            printf("%.17f %.17f %.17f\n", (curx1 + x2)/2.0, (cury1 + y2)/2.0, dist/2.0);
            break;
        }
    }
}