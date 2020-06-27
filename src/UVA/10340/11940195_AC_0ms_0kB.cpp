#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	
    string arr,brr;
   
    while(cin>>arr>>brr){

    int aln,bln,i,j,ck=0;
    aln = arr.length();
    bln = brr.length();

    for(i = 0; i < aln; i++){
        for(j=0; j<bln; j++){
        	if(arr[i]==brr[j]){
        		ck++;
        		i++;
        	}
        }
      }
 
    if(ck==aln){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}

}