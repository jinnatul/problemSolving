#include <bits/stdc++.h>

using namespace std;

string Transposition_Encryption(string plainText, string key_value)
{

    int numbers[10], saveNumbers[10], sortarray[10];
    for(int i = 0; i < 10; i ++){
        numbers[i] = 0;
        saveNumbers[i] = 0;
        sortarray[i] = 0;
    }

    string plain = "";
    for(int i = 0; i < plainText.size(); i++){
        if((plainText[i] >= 'A' && plainText[i] <= 'Z') || (plainText[i] >= 'a' && plainText[i] <= 'z')){
            plain += plainText[i];
        }
    }

    int plainTextln = plain.size();
    int keyln = key_value.size();

    int cnt = 0;
    bool check = true;
    for(int i = 0; i < keyln; i++){

        int num = key_value[i] - '0';
        numbers[num]++;
        if(numbers[num] > 1){
            check = false;
            break;
        }
        saveNumbers[i] = num;
        sortarray[i] = num;
    }

    if(check == false) return "Wronh Key TRy to Use Unique Digits";

    int row = plainTextln / keyln, col = keyln;
    int extrachar = plainTextln - row * keyln;
    extrachar = col - extrachar;

    if(plainTextln % keyln != 0) row++;


    int cnt1 = 0;
    string extrastring = "";
    for(char ch = 'Z'; ; ch--){
        extrastring += ch;
        cnt1++;
        if(cnt1 == extrachar) break;
    }

    reverse(extrastring.begin(), extrastring.end());
    plain += extrastring;

    char plainArray[row][col];

    int pos = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            plainArray[i][j] = plain[pos++];
        }
    }


    sort(sortarray, sortarray + keyln);

    string cipherText = "";

    for(int i = 0; i < keyln; i++){
        int pos2 = 0;
        for(int j = 0; j < keyln; j++){
            if(sortarray[i] == saveNumbers[j]){
                pos2 = j;
                break;
            }
        }

        for(int j = 0; j < row; j++){
            cipherText += plainArray[j][pos2];
        }
    }

    cout << "... Matrix ..." << endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << plainArray[i][j] << " ";
        }
        cout << endl;
    }

    return cipherText;
}

int main()
{
    string plainText, key_value;

    cout << "Enter plain Text.... : " << endl;
    getline(cin, plainText);

    cout << "Enter Key Value.... : " << endl;
    cin >> key_value;

    string ans = Transposition_Encryption(plainText, key_value);

    cout << "Cipher Text : " << endl;
    cout << ans << endl;

}

/*

Details: https://programming-jinnatul.blogspot.com/2019/03/transposition-practical-cryptography.html

*/
