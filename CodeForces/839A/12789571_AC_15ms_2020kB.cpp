#include <bits/stdc++.h>

using namespace std;

long long  i, k, l, n, morol = 0;

int main(){

    cin >> n >> k;
    int arr[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];
     for(i = 0; i < n; i++)
     {
        if(arr[i] > 8){
            morol += 8;
            arr[i + 1] += arr[i] - 8;
        }
        else{
            morol += arr[i];
        }
        if(morol >= k){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
}