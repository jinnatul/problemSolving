#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;


int main()
{
    char arr[105];
    cin >> arr;
    int len = strlen(arr);
    sort(arr, arr+len);
    int count =0;
    for(int i=0; i<len; i++)
    {
        if(arr[i] != arr[i+1])
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
