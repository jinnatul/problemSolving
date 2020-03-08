
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef int ll;

#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)

#define pf1(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)

#define mx 10000007
#define mod 1000000007
#define PI acos(-1.0)

#define size1 1000

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};

//map<ll, ll> ans;
//map<ll, ll> :: iterator it;

vector <ll> edge[size1], cost[size1];
int visited[100], ans[1000];

vector <ll> graph[25];

void Bfs(ll start, ll Node)
{
    memset(visited, 0, sizeof(visited));
    memset(ans, 0, sizeof(ans));

    queue <ll> qu;

    qu.push(start);
    visited[start] = 1;

    while(!qu.empty()){

        ll u = qu.front();

        qu.pop();

        for(ll i = 0; i < graph[u].size(); i++){
            ll v = graph[u][i];

            if(!visited[v]){ ///visited kina check koros nai
                ans[v] = ans[u] + 1;
                visited[v] = 1;
                qu.push(v);
            }

        }
    }

    printf("%2lld to %2lld: %lld\n", start, Node, ans[Node]);

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

    ll Node, Edge;

    while (cin >> Node){

        for(ll j = 0; j < Node; j++){
            sc1(Edge);
            graph[1].push_back(Edge);
            graph[Edge].push_back(1);
        }

        for(ll i = 2; i <= 19; i++){
            ll now;
            sc1(now);

            for(ll j = 0; j < now; j++) {
                sc1(Edge);
                graph[i].push_back(Edge);
                graph[Edge].push_back(i);
            }
        }

        sc1(tc);

        cout << "Test Set #" << t++ << endl;
        while (tc--){
            ll start, end;

            sc2(start, end);

            Bfs(start, end);
        }

        cout << endl;

        for(ll i=0; i<21; i++)
        {
            graph[i].clear();
        }

    }

}