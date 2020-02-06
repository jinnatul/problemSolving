#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,len, number;
    char word[10000];
    scanf("%d",&i);
    while(i--){
        scanf("%s",word);
    len = strlen(word);
   // if(len < 11)
       // printf("%s\n",word);

        printf("%.2lf\n",len*.01);

    }
    return 0;
}
