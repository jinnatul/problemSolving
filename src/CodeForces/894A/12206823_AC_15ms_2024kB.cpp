#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
	 int a,n,v,c,d,ck=0;

	 char arr[101];

	 cin>>arr;

	 for(int i=0; i<strlen(arr); i++){
	 	for(int j=i+1; j<strlen(arr); j++){
	 		for(int k=j+1; k<strlen(arr); k++){

	 		if(arr[i]=='Q' && arr[j]=='A' && arr[k]=='Q'){
	 			ck++;
	 		}
	 	}
	 }
	 
}

cout<<ck<<endl;

}