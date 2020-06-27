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

map <string, ll> visited;
//map <string, string> ans;

void Bfs(string start, string end,vector <string> vc)
{
    queue <string> qu;

    qu.push(start);
    visited[start] = 0;

    while (!qu.empty() && visited.count(end) == 0){

        string top = qu.front();
        qu.pop();

        for(ll i = 0; i < vc.size(); i++){

            string now = vc[i];

            if(!visited.count(now) && now.length() == top.length()) {
                ll uncommonchar = 0;
                for (ll j = 0; j < top.size(); j++)
                    if (top[j] != now[j]) uncommonchar++;

                if (uncommonchar == 1) {

                    visited[now] = visited[top] + 1;
                   // ans[now] = top;
                    qu.push(now);
                }
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
    ll tc, t = 0;

   // freopen("/opt/Coding/clion code/output.txt", "w", stdout);
   // freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    sc1(tc);

    while (tc--){

      //  map <string, vector <string> > grap;
        vector <string> vc;

        string first, last, start, end;

        /*
        for(ll i = 0; i < num; i++){
            cin >> first >> last;
            grap[first].push_back(last);
           // grap[last].push_back(first);
           // visited[first] = -1;
           // visited[last] = -1;
        }
*/
        while (cin >> first){
            if(first == "*") break;
            vc.push_back(first);
        }

        cin.ignore();

        string fullline;
        while (getline(cin, fullline) && fullline != "") {

            stringstream str(fullline);
            str >> start >> end;

            visited.clear();
            Bfs(start, end, vc);
            cout << start << " " << end << " " << visited[end] << endl;
        }

        if(tc)  cout << endl;
    }

}