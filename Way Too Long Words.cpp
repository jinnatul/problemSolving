#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,i,len;
    char word[101];
    scanf("%d",&a);
 while(a--){
         scanf("%s",word);
         len=strlen(word);
        if(11>len)
        printf("%s\n",word);
        else
            printf("%c%d%c\n",word[0],len-2,word[len-1]);


    }
    return 0;
}