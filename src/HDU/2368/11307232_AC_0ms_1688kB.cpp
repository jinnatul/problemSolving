#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    long long int t,ax,ay,bx,by,cx,cy,dx,dy,a,b,c;
    int i=0,n;

    while((cin >> a ) && a!=0){
        a*=2;
        i++;
        cin >> b >> c;
        ax = a*a;
        bx = ((b*b)+(c*c));
 

        if(ax >= bx){

          printf("Pizza %d fits on the table.\n",i);

        }
        else{

             printf("Pizza %d does not fit on the table.\n",i);
        }
    }

   
    
}