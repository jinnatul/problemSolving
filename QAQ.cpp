#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int ck = 0;
    for(int i = 0; i < arr.size(); i++){

        for(int j = i+1; j < arr.size(); j++){

            for(int k = j+1; k < arr.size(); k++){

                if(arr[i] == 'Q' && arr[j] == 'A' && arr[k] == 'Q'){

                    ck++;
                }
            }
        }
    }
    cout << ck << endl;
}