#include<iostream>

using namespace std;

/// Typedef
typedef long long ll;
typedef unsigned long long ull;

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

#define size1 1005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define case cout << "Case " << t++ << ": ";

char grid[size1][size1];
ll row, col;

void dfs(ll rPos, ll cPos) {
    if(rPos < 0 || rPos >= row || cPos < 0 || cPos >= col)
        return;
    if(grid[rPos][cPos] == '*')
        return;
    if(grid[rPos][cPos] == '@')
        grid[rPos][cPos] = '*';

    dfs(rPos, cPos + 1);
    dfs(rPos, cPos - 1);
    dfs(rPos + 1, cPos);
    dfs(rPos - 1, cPos);
    dfs(rPos + 1, cPos + 1);
    dfs(rPos + 1, cPos - 1);
    dfs(rPos - 1, cPos + 1);
    dfs(rPos - 1, cPos - 1);
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll n, m, num, tc, t = 1;

    while (1) {
        cin >> row >> col;
        if(row == 0) break;

        for (ll i = 0; i < row; ++i) {
            for (ll j = 0; j < col; ++j) {
                cin >> grid[i][j];
            }
        }

        ll cnt = 0;
        for (ll i = 0; i < row; ++i) {
            for (ll j = 0; j < col; ++j) {
                if(grid[i][j] == '@') {
                    cnt++;
                    dfs(i, j);
                }
            }
        }

        cout << cnt << endl;
    }
}