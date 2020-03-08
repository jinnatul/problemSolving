#include <bits/stdc++.h>

using namespace std;

string Caesar_Cipher_Encryption(string PlainText, int key_value)
{
    string CipherText = "", plainString = "";

    for(int i = 0; i < PlainText.size(); i++){
        if((PlainText[i] >= 'a' && PlainText[i] <= 'z') || (PlainText[i] >= 'A' && PlainText[i] <= 'Z'))
            plainString += PlainText[i];
    }

    for(int i = 0; i < plainString.size(); i++){
        if(plainString[i] >= 'A' && plainString[i] <= 'Z'){
            CipherText += (((plainString[i] - 'A') + key_value) % 26 ) + 'A';
        }
        else if(plainString[i] >= 'a' && plainString[i] <= 'z'){
            CipherText += (((plainString[i] - 'a') + key_value) % 26 ) + 'a';
        }
    }

    return CipherText;
}


string Caesar_Cipher_Decryption(string CipherText, int key_value)
{
    string PlainText = "", cipherString = "";

    for(int i = 0; i < CipherText.size(); i++){
        if((CipherText[i] >= 'a' && CipherText[i] <= 'z') || (CipherText[i] >= 'A' && CipherText[i] <= 'Z'))
            cipherString += CipherText[i];
    }

    int number, nowNUm, ans = 0, div = 0;
    for(int i = 0; i < cipherString.size(); i++){
        if(cipherString[i] >= 'A' && cipherString[i] <= 'Z'){
            number = (cipherString[i] - key_value - 'A' + 1);
            nowNUm = number;

            if(nowNUm > 0) PlainText += (nowNUm - 1)+ 'A';
            else{
                div = abs(number) / 26 + 1;
                ans = ((div * 26) + nowNUm) % 26;
                if(ans == 0) PlainText += 'Z';
                else PlainText += (ans - 1) + 'A';
            }
        }
        else if(cipherString[i] >= 'a' && cipherString[i] <= 'z'){
            number = (cipherString[i] - key_value - 'a' + 1);
            nowNUm = number;

            if(nowNUm > 0) PlainText += (nowNUm - 1)+ 'a';
            else{
                div = abs(number) / 26 + 1;
                ans = ((div * 26) + nowNUm) % 26;
                if(ans == 0) PlainText += 'z';
                else PlainText += (ans - 1) + 'a';
            }
        }
    }

    return PlainText;
}


int main()
{
    string plainText;
    int key_value;

    cout << "Enter plain Text.... : " << endl;
    getline(cin, plainText);

    cout << "Enter Key Value.... : " << endl;
    cin >> key_value;

    string ans = Caesar_Cipher_Encryption(plainText, key_value);

    cout << "Cipher Text : " << endl;
    cout << ans << endl;

    cout << Caesar_Cipher_Decryption(ans, key_value) << endl;

}
