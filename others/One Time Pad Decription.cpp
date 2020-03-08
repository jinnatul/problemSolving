#include <bits/stdc++.h>

using namespace std;

string One_Time_Pad_Encription(string plainText, string keyvalues)
{

    string withoutSpacePlainText = "";
    string withoutSpaceKeyvalues = "";

    for(int i = 0; i < plainText.size(); i++){
        if((plainText[i] >= 'A' && plainText[i] <= 'Z') || (plainText[i] >= 'a' && plainText[i] <= 'z')){
            withoutSpacePlainText += toupper(plainText[i]);
        }
    }

    for(int i = 0; i < keyvalues.size(); i++){
        if((keyvalues[i] >= 'A' && keyvalues[i] <= 'Z') || (keyvalues[i] >= 'a' && keyvalues[i] <= 'z')){
            withoutSpaceKeyvalues += toupper(keyvalues[i]);
        }
    }

    int ln1 = withoutSpacePlainText.size();
    int ln2 = withoutSpaceKeyvalues.size();

    string newKeyValues = "", finalKeyValues = "";

    if(ln1 > ln2){
        int extra = ln1 - ln2;

        int extratime = extra / ln2;
        if(extra % ln2 != 0) extratime++;

        int cnt = 0;
        while (cnt <= extratime){
            for(int i = 0; i < ln2; i++){
                newKeyValues += withoutSpaceKeyvalues[i];
            }
            cnt++;
        }
        for(int i = 0; i < ln1; i++){
            finalKeyValues += newKeyValues[i];
        }
    }
    else if(ln1 <= ln2){
        for(int i = 0; i < ln1; i++){
            finalKeyValues += withoutSpaceKeyvalues[i];
        }
    }

    string ansCipherText = "";
    for(int i = 0; i < ln1; i++){
        int sum = ((withoutSpacePlainText[i] - 'A') + (finalKeyValues[i] - 'A') + 1) % 26;
        ansCipherText += (sum + 'A');
    }

    cout << "Cipher Text : Key Text ..." << endl;
    cout << ansCipherText << " " << finalKeyValues << endl;

    return ansCipherText;
}

string One_Time_Pad_Decription(string CipherText, string keyvalues)
{
    string withoutSpaceKeyvalues = "";
    for(int i = 0; i < keyvalues.size(); i++){
        if((keyvalues[i] >= 'A' && keyvalues[i] <= 'Z') || (keyvalues[i] >= 'a' && keyvalues[i] <= 'z')){
            withoutSpaceKeyvalues += toupper(keyvalues[i]);
        }
    }

    int ln1 = CipherText.size();
    int ln2 = keyvalues.size();

    string newKeyValues = "", finalKeyValues = "";
    if(ln1 > ln2){
        int extra = ln1 - ln2;

        int extratime = extra / ln2;
        if(extra % ln2 != 0) extratime++;

        int cnt = 0;
        while (cnt <= extratime){
            for(int i = 0; i < ln2; i++){
                newKeyValues += withoutSpaceKeyvalues[i];
            }
            cnt++;
        }
        for(int i = 0; i < ln1; i++){
            finalKeyValues += newKeyValues[i];
        }
    }
    else if(ln1 <= ln2){
        for(int i = 0; i < ln1; i++){
            finalKeyValues += withoutSpaceKeyvalues[i];
        }
    }

    string ansPlainText = "";
    for(int i = 0; i < ln1; i++){
        CipherText[i] = toupper(CipherText[i]);
        finalKeyValues[i] = toupper(finalKeyValues[i]);

        int sum = ((CipherText[i] - 'A') - (finalKeyValues[i] - 'A') - 1);
        if(sum < 1) sum += 26;  // if sum values is negative so we add 26
        sum %= 26;  // if our sum is more then 26 this time we can use mod 26
        ansPlainText += (sum + 'A');
    }

    return ansPlainText;
}


int main()
{
    string plaintext, keyvalue;

    cout << "Enter Plain Text..." << endl;
    getline(cin, plaintext);

    cout << "Enter key values..." << endl;
    getline(cin, keyvalue);

    string ans = One_Time_Pad_Encription(plaintext, keyvalue);

    cout << "Plain Text..." << endl;
    cout << One_Time_Pad_Decription(ans, keyvalue) << endl;

}

/*

Example:
Enter Plain Text...
m  o R o l
Enter key values...
me K S SSD SDAFSDFSDGSDG FDHD
Cipher Text : Key Text ...
ZTCHE MEKSS
Plain Text...
MOROL

OR

Enter Plain Text...
morol
Enter key values...
me
Cipher Text : Key Text ...
ZTETY MEMEM
Plain Text...
MOROL

*/
