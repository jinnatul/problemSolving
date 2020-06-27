#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int t;
    char arr[2000];

    cin>>t;;
    while (t--) {
        cin>>arr;

        int len = strlen(arr);

        if (strcmp(arr, "1") == 0 || strcmp(arr, "4") == 0 || strcmp(arr, "78") == 0)
            cout<<"+"<<endl;
        else if (arr[len - 1] == '5' && arr[len - 2] == '3')
            cout<<"-"<<endl;
        else if (arr[0] == '9' && arr[len - 1] == '4')
            cout<<"*"<<endl;
        else if (arr[0] == '1' && arr[1] == '9' && arr[2] == '0')
            cout<<"?"<<endl;
 
    }
}
