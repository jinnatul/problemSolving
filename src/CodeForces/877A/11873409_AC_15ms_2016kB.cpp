#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include <conio.h>

using namespace std;

int main()
{ 
    string arr;
    cin >>arr;
    int ln,i,ck=0;
    ln = arr.length();

    for(i = 0; i < ln; i++){
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
    else{
        cout<<"NO"<<endl;
    }

 
}