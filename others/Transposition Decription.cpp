#include <bits/stdc++.h>

using namespace std;

string Transposition_Decryption(string cipherText, string key_value)
{

    int numbers[10], saveNumbers[10], sortarray[10];
    for(int i = 0; i < 10; i ++){
        numbers[i] = 0;
        saveNumbers[i] = 0;
        sortarray[i] = 0;
    }

    int cipherTextln = cipherText.size();
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

    int row = cipherTextln / keyln;
    int col = keyln;

    char plainArray[row][col];

    sort(sortarray, sortarray + keyln);


    // find col and push chars on this col
    int pos = 0;
    for(int i = 0; i < keyln; i++){
        int foundCol = 0;
        for(int j = 0; j < keyln; j++){
            if(sortarray[i] == saveNumbers[j]){
                foundCol = j;
                break;
            }
        }

        for(int i1 = 0; i1 < row; i1++){
            plainArray[i1][foundCol] = cipherText[pos++];
        }
    }

    string plainTxt = "";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            plainTxt += plainArray[i][j];
        }
    }

    char chArray[10] = {'Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q'};
    int extraChar = 0;

    for(int i = cipherTextln - 1; ; i--){
        if(plainTxt[i] == chArray[extraChar]) extraChar++;
        else break;
    }

    string ansPlainText = "";
    for(int i = 0; i < cipherTextln - extraChar; i++){
        ansPlainText += plainTxt[i];
    }

    return ansPlainText;
}


int main()
{
    string CipherText, key_value;

    cout << "Enter Cipher Text.... : " << endl;
    getline(cin, CipherText);

    cout << "Enter Key Value.... : " << endl;
    cin >> key_value;

    cout << "Plain Text : " << endl;

    cout << Transposition_Decryption(CipherText, key_value) << endl;

}

/*

Detals:
https://programming-jinnatul.blogspot.com/2019/03/transposition-cryptography-algorithms.html

*/
