#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int ck(0);
    bool magic = true;

    for (int i = 0; i < arr.length(); i++)
        if (ck > 0 and ck < 3 and arr[i] == '4')
            ck++;
        else if (arr[i] == '1')
            ck = 1;
        else
            magic = false;

    cout << (magic ? "YES" : "NO") << endl;
}