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


int main()
{
    ll i,j=0,k,l,a=0,b,m,n,ck=0,dk=0;

    map<char, int>my;
    map<char, int> :: iterator it;

    char arr[1000],brr[1000];
    cin>>arr>>brr;

    n = strlen(arr);
    m = strlen(brr);

    for(i=0; i<n; i++){
        my[arr[i]]++;
    }
    for(j=0; j<m; j++){
        my[brr[j]]++;
    }

    for(it = my.begin(); it!=my.end(); it++){
        if(it->second %2 !=0)
            ck++;
    }

    if(ck>1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
