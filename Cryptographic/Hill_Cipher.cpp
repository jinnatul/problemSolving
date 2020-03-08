#include<bits/stdc++.h>

using namespace std;

string Hill_Cipher_Encription (string plainText, string key)
{
    for(int i = 0; i < 4; i++){
    plainText[i] = toupper(plainText[i]);
    key[i] = toupper(key[i]);
    }

  int plain[4];

  for(int i = 0; i < 4; i++){
    plain[i] = plainText[i] - 'A';
  }

  int keyvalues[2][2];

  int poskey = 0;
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
        keyvalues[i][j] = key[poskey++] - 'A';
    }
  }

  int cipherText[4];
  string anscipherText = "";

  cipherText[0] = ((keyvalues[0][0] * plain[0]) + (keyvalues[0][1] * plain[1])) % 26;
  cipherText[1] = ((keyvalues[1][0] * plain[0]) + (keyvalues[1][1] * plain[1])) % 26;
  cipherText[2] = ((keyvalues[0][0] * plain[2]) + (keyvalues[0][1] * plain[3])) % 26;
  cipherText[3] = ((keyvalues[0][0] * plain[2]) + (keyvalues[1][1] * plain[3])) % 26;

  for(int i = 0; i < 4; i++){
        anscipherText += cipherText[i] + 'A';
  }

  return anscipherText;
}

string Hill_Cipher_Decription (string cipherText, string key)
{

}

int main()
{
  cout << "Enter plain Text..." << endl;
  string plainText;
  cin >> plainText;

  cout << "Enter Key Values..." << endl;
  string key;
  cin >> key;

  string anscipherText = Hill_Cipher_Encription(plainText, key);

  cout << anscipherText << endl;

}
