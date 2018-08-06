#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

//int gcd(int a, int b) { if (b == 0)  return a;   else return gcd(b, a%b); }
//int lcm(int a, int b) { return (a*b)/gcd(a,b); }

int main()
{
   int a, b, c, ck=0,i,j,sum=0,sum1=0;
   cin>>a>>b>>c;
   int arr[6];

   arr[0]=a+b+c;
   arr[1]=a*b*c;
   arr[2]=a*b+c;
   arr[3]=a+b*c;
   arr[4]=a*(b+c);
   arr[5]=(a+b)*c;

  sort(arr,arr+6);
  printf("%d\n", arr[5]);

}