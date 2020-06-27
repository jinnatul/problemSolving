#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
   
     int a,b,c,d,nn;
     cin >> nn;
     while(1){
        nn++;
       
        a=nn/1000;
        b=nn/100;
        b=b%10;
        c=nn/10;
        c=c%10;
        d=nn%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
     }
     cout<< nn << endl;

}