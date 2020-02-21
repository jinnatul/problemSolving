#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    char arr[100];
    int n,i,j,a,ck;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr;
        int ln = strlen(arr);
        if(ln== 5){
            
            cout<<"3"<<endl;
        }
        else {
           ck=0;
           if(arr[0]=='o')
            ck++;
           if(arr[1]=='n')
            ck++;
           if(arr[2]=='e')
            ck++;
        if(ck>=2)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
             
        }
    }
}
