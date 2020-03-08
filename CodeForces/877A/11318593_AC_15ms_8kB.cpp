 #include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 

using namespace std;

int main()
{
    int n,i,k,ck=0;
    string arr;

    cin>>arr;
 

    for(i=0; i<arr.length(); i++){

        if(arr.compare(i, 5, "Danil")==0){
            ck++;
        }
        else if(arr.compare(i, 4, "Olya")==0){
           ck++;
        }
       else if(arr.compare(i, 5, "Slava")==0){
            ck++;
        }
       else if(arr.compare(i, 3, "Ann")==0){
            ck++;
        }
       else if(arr.compare(i, 6, "Nikita")==0){
            ck++;
        }

    }
    if(ck==1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}