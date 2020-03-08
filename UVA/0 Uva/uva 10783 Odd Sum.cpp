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
  int testCases;
        int a,b;
       
        cin>>testCases;
        for(int i=0; i<testCases; i++)
        {
                int sumOfOdd = 0;
                cin>>a>>b;
                for(int j=a; j<=b; j++)
                {
                        if(j%2 !=0)
                        {
                                sumOfOdd+=j;
                        }
                        else
                        {
                                continue;
                        }
                }
                cout<<"Case "<<i+1<<": "<<sumOfOdd<<endl;
        }
}
