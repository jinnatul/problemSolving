#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int g, i, j;

    char arr[101];

    while(scanf("%d", &g) == 1 && g) {

        scanf("%s", arr);

        int len = strlen(arr), 
        p = len/g;

        for(i = 0; i < len; i += p) {

            for(j = i+p-1; j >= i; j--)

                printf("%c", arr[j]);
        }

        cout<<endl;
         
    }
}
