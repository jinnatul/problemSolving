#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 100000007
#define PI acos(-1.0)

#define size1 1000
#define pb push_back


/*

ll node, edge;

map <ll, ll> sort_path;
map <ll, vector<ll> > graph;
bool used[size1];

ll bfs(ll source, ll end)
{
    memset(used, false, sizeof(used));

    queue <ll> qu;
    qu.push(source);
    used[source] = true;

    while (!qu.empty()){
        ll top = qu.front();
        qu.pop();

        if(source == end) return used[top];

        for(ll i = 0; i < graph[top].size(); i++){
            ll each = graph[top][i];
            if(!used[each]){
                used[each] = true;
                qu.push(each);
                sort_path[each] = top;
            }
        }
    }

    return -1;
}

void print_path(ll start, ll end){

    if(start == end){
        cout<<start<<" ";
        return;
    }
    print_path(start, sort_path[end]);

    cout << end << " ";
}

 */

int main()
{
    ll num, m, tc, t = 1;

    sc1(num);

    ll ext = num % 4;

    if(ext == 0) cout << "1 A" << endl;
    else if(ext == 1) cout << "0 A" << endl;
    else if(ext == 2) cout << "1 B" << endl;
    else cout << "2 A" << endl;
}
