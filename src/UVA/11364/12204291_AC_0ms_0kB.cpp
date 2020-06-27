#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
	int min=99,max=0,a,n,t,m,ck=0,sum=0;

	cin>>n;
	while(n--){
		min=99,max=0;
		
		cin>>t;
		for(int i=0; i<t; i++){
               cin>>a;
               if(a>max){
               	max = a;
               }
               if(a<min){
               	min = a;
               }
		}
		m = (max-min)*2;
		printf("%d\n", m);
		m=0;
	}

}