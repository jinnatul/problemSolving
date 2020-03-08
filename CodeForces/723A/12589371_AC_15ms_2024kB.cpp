/***
  * Jinnat Morol
***/

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
int arr[3];

int main(){

    int morol;
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    morol = arr[2]-arr[0];
    cout << morol <<endl;
}
