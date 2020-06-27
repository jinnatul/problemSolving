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
  int t,n,a,b,i,j;
  cin>>t;
  for(j=1; j<=t; j++){
    
 /*   cin>>n;
    int arr[n];
    int sum =0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
      printf("Case %d: %d\n", t, sum);
      sum=0;
 */
    char arr[101];
    cin>>arr;
    int ln = strlen(arr);

    if(ln<11){
        cout<<arr<<endl;
    }
    else{
        int dk = ln-2;
        printf("%c%d%c\n",arr[0],dk,arr[ln-1]);
    }

  }

}