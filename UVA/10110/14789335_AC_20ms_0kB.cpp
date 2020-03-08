#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;


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

#define mx 100005
#define mod 1000000009
#define pf(a) cout<<a<<endl

/************ Start my personal Library ************/
// Square number count in 2 number range (3 - 10)--> 2

#define Square_number_count_in_2_rang(n) for(ll i=0; i<n; i++){ scl2(a,b); ck = sqrt(a-1); dk = sqrt(b); cout<<dk-ck<<endl; }

int sum[mx];
ll max(ll a, ll b){  return (a>b) ? a : b; }

ll knapsack(ll cap,ll wt[],ll val[],ll item){ if(cap==0 || item == 0) return 0; if(wt[item-1]>cap) return knapsack(cap, wt, val, item-1);
   else return max(val[item-1]+ knapsack(cap-wt[item-1], wt, val, item-1), knapsack(cap, wt, val, item-1) ); }

ll totalLearYearCount(ll year){ ll check4 = year/4; ll check100 = year/100; ll check400 = year/400; return (check4 + check400) - check100; }

ll checkTwoSquaresOrNotTwoSquares(ll n ){ ll a = sqrt(n),ck=0,i=0,j=0; while(a > 0){ if(i*i > n){ cout<<"No"<<endl; break; } else if(a*a + i*i == n){
   cout<<"Yes"<<endl; break; } else if(a*a + i*i < n){ i++; } else a--; } }

bool checkPrime(int n) { int i; if(n<=1)return false; for(i=2;i*i<=n;i++){ if(n%i==0)return false; } return true; }
void primeSaveinArray() { sum[0] = sum[1]=0; for(int i=2; i<=mx; i++){ sum[i] = sum[i-1]; if(checkPrime(i)){ sum[i]++; } } }

ll revNumber(ll n) { ll b=0; while(n!=0){ b = b*10 + n%10; n/=10; } return b; }

ll learYearCheck(ll year) { if(year%4!=0) return 0; else if(year%100!=0) return 1; else if(year%400!=0) return 0; else return 1; }

ll countDevisior(ll n) { ll ck=0; for(ll i=1; i*i<=n; i++){ if(n%i==0){ ck++; if(i!=n/i) ck++; } } return ck; }

bool com(pair<int ,string> p , pair<int,string> q ){  return p.first < q.first; }  /// kom theke beshi sort ///return p.first > q.first; /// beshi theke kom sort

char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

/************ Start my main method code ************/

#define N 20000000
bool cp[N];
ll check[N];
/*
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[1] = false;
    ll root = sqrt(20000010);

    for(ll i=3; i<=root; i++){
        if(prime[i]==true){
            for(ll j=i+i; j<=20000010; j+=i)
                prime[j] = false;
        }
    }
}

void twinPrime()
{
    int j = 1;
    for(ll i=3; i<=20000010; i++){
        if(prime[i] && prime[i+2]){
            myprime[j++] = i;
        }
    }
}
*/
int main()
{
    ll n,m,i,j=0,k=1,t,a=0,b,c,ck=0,dk=0;
    while(scl1(n)){
        if(n==0) break;
        ck = sqrt(n);
        if(ck*ck==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
