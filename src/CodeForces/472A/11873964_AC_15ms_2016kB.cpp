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
    int num;
    cin>>num;

    if(num % 2==0){

        printf("8 %d\n",num-8);
    }
    else
        printf("9 %d\n",num-9);
}