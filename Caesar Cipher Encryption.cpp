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

int main()
{
    string PlainText;
    int key_value;

    cout << "Enter Plain Text.... : ";
    cin >> PlainText;

    cout << "Enter Key Value.... : ";
    cin >> key_value;

    cout << "Cipher Text : ";
    cout << Caesar_Cipher_Encryption(PlainText, key_value) << endl;

}


/*
Details: https://programming-jinnatul.blogspot.com/2019/03/caesar-cipher-practical-cryptography.html

Example:
Enter Plain Text.... : morol
Enter Key Value.... : 5
Cipher Text : rtwtq

*/
