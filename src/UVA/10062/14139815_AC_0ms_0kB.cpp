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

bool sortbysecdesc(const pair<int,int> &a,
const pair<int,int> &b)
{
if(a.second==b.second) return a.first > b.first;
return a.second<b.second;
}

int main(){

   ll a,t,b,c,d=0,j=1,n,i=1,m=0,ck=0;
   string arr;
   char aa;
   while(getline(cin, arr)){
   if(m>0)
      cout<<endl;
   m++;
   map<char, int>my;
   vector< pair<int, int> >mypair;
   map<char, int> :: iterator it;
        ck=0;
        int ln = arr.size();

      for(i=0; i<ln; i++){
         my[arr[i]]++;
      }

      for(it = my.begin(); it!=my.end(); it++){
      if(it->second>0){
       mypair.push_back(make_pair((int)it->first, it->second) );
       ck++;
      }
    }

      sort(mypair.begin(), mypair.end(), sortbysecdesc);

      for(a=0; a<ck; a++){
        cout<<mypair[a].first<<" "<<mypair[a].second<<endl;
      }

      arr.clear(),ck=0,ln=0;
   }
}
