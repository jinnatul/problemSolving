#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
   
     int aa,b,c,d,n;
     cin >> n;
     while(1){
        n++;
       
        aa=n/1000;
        b=n/100;
        b=b%10;
        c=n/10;
        c=c%10;
        d=n%10;

        if(aa!=b && aa!=c && aa!=d && b!=c && b!=d && c!=d)
            break;
     }
     cout<< n << endl;

}