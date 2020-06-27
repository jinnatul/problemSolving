#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>

using namespace std;


int main()
{

    char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char brr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int n,i=0,j=0,a,b,ln,my=0,ck=0;
    char aa;
    cin>>n;
    while(n--){
        cin>>aa>>a;
        ck=0;
        for(i=0; i<26; i++){
            if(arr[i]==aa){
                ln = i+1;
                my=1;
                break;
            }
            else if(brr[i]==aa){
                ln = i+1;
                my=0;
                break;
            }
        }
        if(my==1){
        ck = ln+a;
        cout<<ck<<endl;
        }
        else{
            ck = (ln*-1)+a;
            cout<<ck<<endl;
        }
    }

}
