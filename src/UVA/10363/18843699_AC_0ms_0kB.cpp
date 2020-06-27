#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000000
#define mod 1000000007
#define PI acos(-1.0)

#define size1 100010

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

char arr[3][3];
bool checkChar (char ch)
{
    if(arr[0][0] == ch && arr[0][1] == ch &&  arr[0][2] == ch) return false;
    if(arr[1][0] == ch && arr[1][1] == ch &&  arr[1][2] == ch) return false;
    if(arr[2][0] == ch && arr[2][1] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][0] == ch && arr[1][0] == ch &&  arr[2][0] == ch) return false;
    if(arr[0][1] == ch && arr[1][1] == ch &&  arr[2][1] == ch) return false;
    if(arr[0][2] == ch && arr[1][2] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][0] == ch && arr[1][1] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][2] == ch && arr[1][1] == ch &&  arr[2][0] == ch) return false;
    return true;
}

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);


    sc1(tc);

    while (tc--){

        int Xcount = 0, Ocount = 0;
        for(int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
                if(arr[i][j] == 'X') Xcount++;
                else if(arr[i][j] == 'O') Ocount++;
            }
        }

        bool check;
        if(Xcount == Ocount) check = checkChar('X');
        else if(Xcount == Ocount + 1) check = checkChar('O');
        else check = false;

        if(check == true)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    }

    return 0;
}