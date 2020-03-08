/**
 *    author:  Jinnat Morol
 *           
**/

#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
 
        if(a>b){
            cout<<">"<<endl;
        }
        else if(a<b){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
}