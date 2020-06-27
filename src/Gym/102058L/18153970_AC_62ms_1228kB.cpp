#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 1000000007
#define PI acos(-1.0)

#define size1 300050

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};


/*
//map<ll, ll> ans;
//map<ll, ll> :: iterator it;
vector <int> edge[size1];


vector <int> result;
int visited[size1], ans[1000];


void Dfs(int start)
{

    priority_queue <int, vector<int>, greater<int> > qu;

    qu.push(start);
    visited[start] = 1;

    while(!qu.empty()){

        int u = qu.top();
        result.push_back(u);

        qu.pop();

        for(int i = 0; i < edge[u].size(); i++){
            int v = edge[u][i];

            if(!visited[v]){ ///visited kina check koros nai
               // ans[v] = ans[u] + 1;
                visited[v] = 1;
                qu.push(v);
            }

        }
    }

    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";

}


/*
void print(ll u, ll v){

    if(u==v){
        cout << v << " ";
        return;
    }

    cout << v << " ";
    print(u, ans[v]);

}
*/


int main()
{
    // freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll tc, t = 1, num, total = 0;

    string arr;
    cin >> arr;

    ll ln = arr.size();

    cin >> num;

    ll cnt = 0;
    for(ll i = 0, j = ln - 1; i <= j; i++, j--){
        if(arr[i] != arr[j]) return cout << "NO" << endl,0;
    }

    cout << "YES" << endl;

}