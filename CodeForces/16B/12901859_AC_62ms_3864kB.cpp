/***
  * Jinnat Morol
***/

#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>

using namespace std;


long long n,m,arr[20000],brr[200000],q,ans;

int main(){

cin>>m>>n;

  for (int i=1;i<=n;i++)
    cin>>arr[i]>>brr[i];

  for (int i=1;i<=n;i++){
    for (int j=i+1;j<=n;j++){
            if (brr[j]>brr[i]){
                swap(arr[i],arr[j]);
                swap(brr[i],brr[j]);
            }
        }
  }


  for(int i=1;i<=n;i++){
        q=min(m,arr[i]);
        ans+=brr[i]*q;
        m-=q;
}
cout<<ans<<endl;

}
