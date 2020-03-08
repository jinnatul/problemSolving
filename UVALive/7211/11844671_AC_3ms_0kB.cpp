/***
  * Name : Jinnat Morol
  * Date : 03/12/17
***/


#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) == 1) {
        int x, ret = 0;
        for (int i = 0; i < 5; i++)
            scanf("%d", &x), 
            ret += n == x;
        printf("%d\n", ret);
    }

}

