#include<iostream>
using namespace std;
int main()
{
    int t;
    char arr[1001][9];
    int ck = 0, aaa = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < t; j++){
            if(arr[j][i] == '1'){
                ++ck;
            }
        }
        aaa = max(aaa , ck);
        ck = 0;
    }
    cout << aaa << endl;
    return 0;
}