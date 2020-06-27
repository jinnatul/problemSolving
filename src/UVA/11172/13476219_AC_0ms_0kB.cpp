
#include<bits/stdc++.h>

#include<stdio.h>

#include<string.h>

#include<math.h>

#include<algorithm>

  

using namespace std;


int main()

{

    int n1,a,b;

    cin>>n1;                     

    for(int i=0;i<n1;i++){

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