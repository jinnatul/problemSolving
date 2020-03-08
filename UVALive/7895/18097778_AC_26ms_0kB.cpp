
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)

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
    ll tc, t = 1;
    // freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll N, C, S;


    while (cin >> N ){

        if(N == 2) cout << N << endl;
        else{

            for(ll i = N; i > 2; i--){
                ll ck = 0;
                for(ll j = 2; j * j <= i; j++){
                    if(i % j == 0){
                        ck = 1;
                        break;
                    }
                }
                if(ck == 0){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}