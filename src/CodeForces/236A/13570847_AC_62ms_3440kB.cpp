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
    char s[105];
    cin >> s;
    int len = strlen(s);
    sort(s, s+len);
    int count =0;
    for(int i=0; i<len; i++)
    {
         if(s[i] != s[i+1])
        {
            count++;
        }
    }
     if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}
