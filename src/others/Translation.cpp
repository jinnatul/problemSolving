#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    char arr[100],a[100];
    scanf("%s %s",arr,a);
    int ln,ln2,i,j,ck;
    ln=strlen(arr);
    ln2=strlen(a);
    ck=1;
    for(i=0,j=ln2-1;i<ln && j>=0;i++,j--){
        if(arr[i]!=a[j]){
          ck=0;
          break;
        }
    }
    if(ck==1)
    cout<<"YES"<<endl;
     else
          cout<<"NO"<<endl;


}