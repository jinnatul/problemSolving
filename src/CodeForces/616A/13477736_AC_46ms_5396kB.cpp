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

char arr[1000011],brr[1000011];

int main()
{

    long long int n,i=0,j=0,a,b,ln1,ln2,ck=0;
    scanf("%s %s", &arr, &brr);
    ln1 = strlen(arr);
    ln2 = strlen(brr);

    while(arr[i]=='0') i++;
    while(brr[j]=='0') j++;

    if(ln1-i > ln2-j)
        printf(">\n");
    else if(ln1-i < ln2-j)
        printf("<\n");
    else{
        if(strcmp(arr+i, brr+j)==0)
            printf("=\n");
        else if(strcmp(arr+i, brr+j)>0)
            printf(">\n");
        else
            printf("<\n");
    }


}
