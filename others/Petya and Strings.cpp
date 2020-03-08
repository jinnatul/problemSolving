#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    char arr[100],a[100];
    scanf("%s %s",arr,a);
    int ln,ln2;
    ln=strlen(a);
    ln2=strlen(arr);
    for(int i=0;i<ln;i++){
     arr[i]=tolower(arr[i]);
     a[i]=tolower(a[i]);
    }

    printf("%d\n",strcmp(arr,a));

}