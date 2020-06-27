#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int i,j,ck=0,ln,ln2;

    string arr, brr;
    while(cin >> arr >> brr){

      ln = arr.length();
      ln2 = brr.length();
    ck=0;
    for(i=0; i<ln; i++){

        for(j=0; j< ln2; j++){
            if(arr[i]== brr[j]){
                ck++;
                i++;
            }
        }

        
    }
    if(ck==ln){

        cout<<"Yes"<<endl;
    }
    else{
         cout<<"No"<<endl;
        }
 

}

}
