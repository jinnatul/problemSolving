#include <bits/stdc++.h>

using namespace std;

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
    string CipherText;
    int key_value;

    cout << "Enter Cipher Text.... : ";
    cin >> CipherText;

    cout << "Enter Key Value.... : ";
    cin >> key_value;

    cout << "Plain Text : ";

    cout << Caesar_Cipher_Decryption(CipherText, key_value) << endl;

}

/*
Details: https://programming-jinnatul.blogspot.com/2019/03/transposition-cryptography-algorithms.html

Example:
Enter Cipher Text.... : rtwtq
Enter Key Value.... : 5
Plain Text : morol
*/
