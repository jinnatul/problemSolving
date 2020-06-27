#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>

using namespace std;

int main()
{
   const string key[] = { "the", "this", "that" };
	string arr = "";

	while (getline (cin, arr ) ){
		int len = arr.length();
		vector <bool> match (3, false );
		int i,j;

		for (j = 0; j < 26; ++j){
			string curr = arr;
			for (i = 0; i < len; ++i){
				if ( isalpha(arr[i]) ){
					curr[i] = (arr[i] - 'a' + j ) % 26 + 'a';
				}
			}

			for (i = 0; i < 3; ++i){
				if ( curr.find(key[i] ) != string::npos ){
					match[i] = true;
				}
			}

			if ((int)count(match.begin(), match.end(), true ) > 0){
				cout << curr << endl;
				break;
			}
		}
	}
}
