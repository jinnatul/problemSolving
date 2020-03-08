
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>


using namespace std;

int main()
{ 
      int n,i,digit;
      long int num,rev,ck;
 
     cin>>n;
     while(n--){
     cin>>num;
     ck = num;
     rev=0;
     i=0;
     while(i<1000){

     while(ck>0){
 
         digit = ck % 10;
         rev = rev * 10+ digit;
         ck = ck / 10;
     }
     if(rev==num){
       cout<<i<<" "<< num<<endl;
       break;
     }

      num+=rev;
      ck=num;
      rev=0;
      i++;
      
}

}
}