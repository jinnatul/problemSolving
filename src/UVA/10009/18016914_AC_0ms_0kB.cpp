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

vector <ll> edge[size1], cost[size1];

map <string, ll> visited;
map <string, string> ans;

void Bfs(string start, string end, map <string, vector <string> > grap)
{
    queue <string> qu;

    qu.push(start);
    visited[start] = 0;

    while (!qu.empty()){

        string top = qu.front();
        qu.pop();

        if(top == end) break;


        for(ll i = 0; i < grap[top].size(); i++){
            string now = grap[top][i];

            if(!visited.count(now)){

                visited[now] = visited[top] + 1;
                ans[now] = top;
                qu.push(now);
            }
        }
    }

}


void printResultPath(string end, string start){

    if(end == start) {
        cout << start[0];
        return;
    }
    else{
        printResultPath(ans[end], start);
        cout << end[0];
    }
}

int main()
{
    ll tc, t = 0;

   // freopen("/opt/Coding/clion code/output.txt", "w", stdout);
   // freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    sc1(tc);

    while (tc--){

        t++;
        if(t > 1) cout << endl;

        map <string, vector <string> > grap;

        string first, last, start, end;

        ll num, tcase;
        sc2(num, tcase);

        for(ll i = 0; i < num; i++){
            cin >> first >> last;
            grap[first].push_back(last);
            grap[last].push_back(first);
           // visited[first] = -1;
           // visited[last] = -1;
        }

        while (tcase--) {

            cin >> start >> end;

            ans.clear();
            visited.clear();
            Bfs(start, end, grap);
            printResultPath(end, start);
            cout << endl;
        }
    }

}
