#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
   
  int k,t,ck=0, n;
  cin >> k >> n;

  for (int i = 0; i < n; i ++)   
  {     
    cin >> t;
    if (t + ck > k)
    {
       ck = (t + ck - k);
    }
    else
    {
        ck = 0;
    }
  }
  cout << ck << endl;

}