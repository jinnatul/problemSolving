#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
     string str,arr,brr;
     char m[3000];

     m['A']='A';
     m['E']='3';
     m['H']='H';
     m['I']='I';
     m['J']='L';
     m['L']='J';
     m['M']='M';
     m['O']='O';
     m['S']='2';
     m['T']='T';
     m['U']='U';
     m['V']='V';
     m['W']='W';
     m['X']='X';
     m['Y']='Y';
     m['Z']='5';
     m['1']='1';
     m['2']='S';
     m['3']='E';
     m['5']='Z';
     m['8']='8';

 while(cin>>str){
  arr=brr="";
  int len=str.size();
  for(int i=len-1;i>=0;i--)
  {
      arr+=str[i];
      brr+=m[str[i]];
  }
  if (str==arr && str==brr)
  cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
  else if (str==arr && str!=brr)
   cout<<str<<" -- is a regular palindrome."<<endl<<endl;
  else if (str!=arr && str==brr)
  cout<<str<<" -- is a mirrored string."<<endl<<endl;
  else
   cout<<str<<" -- is not a palindrome."<<endl<<endl;
 }

}
