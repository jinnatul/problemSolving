#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
      
    int n, tc, x, xx, y, yy;

    while(cin>>n && n)
    {
        cin>>x>>y;
       
        for(int i=0;i<n;i++)
        {
            cin>>xx>>yy;
            //xx-=x;
            //yy-=y;
            if(xx==x || yy==y) cout<<"divisa\n";
            else if(xx > x && yy > y) cout<<"NE\n";
            else if(xx < x && yy > y) cout<<"NO\n";
            else if(xx > x && yy < y) cout<<"SE\n";
            else cout<<"SO\n";

        }
    }

}
