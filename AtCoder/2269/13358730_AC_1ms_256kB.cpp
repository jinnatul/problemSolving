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

using namespace std;


int main(){

    char oper;
    int a,b;

    scanf("%d %c %d",&a, &oper, &b);

        if(oper=='+')
            printf("%d",a+b);
        else if(oper == '-')
            printf("%d",a-b);
}
