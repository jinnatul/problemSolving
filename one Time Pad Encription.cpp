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

    cout << "Plain Text : Key Text ..." << endl;
    cout << withoutSpacePlainText << " " << finalKeyValues << endl;

    return ansCipherText;
}



int main()
{
    string plaintext, keyvalue;

    cout << "Enter Plain Text..." << endl;
    getline(cin, plaintext);

    cout << "Enter key values..." << endl;
    getline(cin, keyvalue);

    string ans = One_Time_Pad_Encription(plaintext, keyvalue);
    cout << "Cipher Text..." << endl;
    cout << ans << endl;
}
