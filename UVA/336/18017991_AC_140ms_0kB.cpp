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

//vector <ll> edge[size1], cost[size1];

map <ll, ll> visited;
map <ll, ll>::iterator it;

//map <string, string> ans;

void Bfs(ll start, ll end, map <ll, vector <ll> > grap)
{
    queue <ll> qu;

    qu.push(start);
    visited[start] = 0;

    while (!qu.empty()){

        ll top = qu.front();
        qu.pop();

        for(ll i = 0; i < grap[top].size(); i++){

            ll now = grap[top][i];

            if(!visited.count(now)) {

                    visited[now] = visited[top] + 1;
                   // ans[now] = top;
                    qu.push(now);
            }
        }
    }

}


/*
void printResultPath(string end, string start){

    if(end == start) {
       // cout << start << " ";
        return;
    }
    else{
        printResultPath(ans[end], start);
        cout << ans[end] << " " << end << " ";
    }
}

 */

int main()
{
    ll tc, t = 1;

   // freopen("/opt/Coding/clion code/output.txt", "w", stdout);
   // freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    while (sc1(tc)){

        if(tc == 0) break;
        map <ll, vector <ll> > grap;
       // vector <string> vc;

        ll first, last, start, end;


        for(ll i = 0; i < tc; i++){
            cin >> first >> last;
            grap[first].push_back(last);
            grap[last].push_back(first);
           // visited[first] = -1;
           // visited[last] = -1;
        }
/*
        while (cin >> first){
            if(first == "*") break;
            vc.push_back(first);
        }

        cin.ignore();
*/

        while (cin >> start >> end) {

            if(start == 0 && end == 0) break;

            visited.clear();

            Bfs(start, end, grap);
            //cout << start << " " << end << " " << visited[end] << endl;

            ll ans = 0;
            for(it = visited.begin(); it!= visited.end(); it++){
                if(it->second > end ) ans++;
            }

            ans += grap.size() - visited.size();
         //   cout << "grap size : visit : " << grap.size() << " " << visited.size() << endl;
           cout << "Case " << t++ << ": " << ans << " nodes not reachable from node " << start << " with TTL = " << end << "." << endl;
        }

    }

}