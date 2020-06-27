/*
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector< pii > vii;


//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)


/// Constants
#define MAX                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932
*/

#include<stdio.h>


int gcd(long long int n, long long int m);
int lcm(int n, int m);

int main()
{
    long long int a,b,i,j,m,n,ck=0,dk=0;
    scanf("%lld", &a);
    while(a--){
    scanf("%lld %lld", &n, &m);
    ck = gcd(n,m);
    dk = (n*m)/gcd(n,m);
    printf("%lld %lld\n",ck, dk);
    }
}

int gcd(long long int n, long long int m)
{
    //if(n<m) swap(n,m);
    if(m==0) return n;
    else return gcd(m, n%m);
}
/*
int lcm(int a, int b)
{
    int i,ck=0;
   for(i=1; ; i++){
    if(i%a==0 && i%b ==0)
        return i;
   }

}
*/
