#include <bits/stdc++.h>
using namespace std;

int main() {

 string arr;
 cin >> arr;
 int len = arr.length();
 for(int i = 0; i < len;){
        if(arr[i] == arr[i+1] && i > -1){
            arr.erase(i,2);
            i--;
        }
        else i++;
 }

 if(!arr.empty())cout << arr<< endl;
 else cout << "Empty String" << endl;
 return 0;
}