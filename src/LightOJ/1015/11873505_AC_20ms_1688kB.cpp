#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

int gcd(int a, int b) { if (b == 0)  return a;   else return gcd(b, a%b); }
int lcm(int a, int b) { return (a*b)/gcd(a,b); }

int main()
{
  int t,n,a,b,c,aa,bb,cc,s,d,f,k,i,j;
  cin>>t;
  for(j=1; j<=t; j++){
    
  cin>>n;
    int arr[n];
    int sum =0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0)
        sum+=arr[i];
    }
      printf("Case %d: %d\n", j, sum);
      sum=0;

  }

}