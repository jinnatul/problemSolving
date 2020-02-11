#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int i,n,j,ck,a,b,c;
    cin>>n;

    for(i=0;i<n;i++){
        cin >> a >> b >> c;

        if(a+b>c){
            cout<<"OK"<<endl;
        }
        else {
            cout<<"Wrong!!"<<endl;
        }
    }
}
