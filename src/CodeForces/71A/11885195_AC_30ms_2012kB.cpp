#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,len, number;
    char word[101];
    scanf("%d",&i);
    while(i--){
        scanf("%s",word);
    len = strlen(word);
    if(len < 11)
        printf("%s\n",word);
    else{
        printf("%c%d%c\n",word[0],len-2,word[len-1]);
    }
    }
    return 0;
}