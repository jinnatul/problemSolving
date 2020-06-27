#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    char arr[100];
    int n,i=1,j,a,ck;
 
    while(1){
        
        cin>>arr;
 
        if(strcmp(arr,"#")==0)
            return 0;
        printf("Case %d: ",i++);

        if(strcmp(arr,"HELLO")==0){

            printf("ENGLISH\n");
        }
        else if(strcmp(arr,"HOLA")==0){

            printf("SPANISH\n");
        }
        else if(strcmp(arr,"HALLO")==0){

            printf("GERMAN\n");
        }
        else if(strcmp(arr,"BONJOUR")==0){

            printf("FRENCH\n");

        }
        else if(strcmp(arr,"CIAO")==0){

            printf("ITALIAN\n");

        }
        else if(strcmp(arr,"ZDRAVSTVUJTE")==0){

            printf("RUSSIAN\n");
        }
        else{

            printf("UNKNOWN\n");
        }
    }
}
