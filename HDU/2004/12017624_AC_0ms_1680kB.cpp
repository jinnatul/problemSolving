#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	  int a,ln,n,m,aa,b,i,bb;
 
	  while(scanf("%d",&a)!=EOF){
      
      if(a<=100 && a>=90)
      	cout<<"A"<<endl;

      else if(a<=89 && a>=80)
      	cout<<"B"<<endl;

       else if(a<=79 && a>=70)
      	cout<<"C"<<endl;

       else if(a<=69 && a>=60)
      	cout<<"D"<<endl;
       else if(a<=59 && a>=0)
      	cout<<"E"<<endl;
       else  
       	cout<<"Score is error!"<<endl;


}

}