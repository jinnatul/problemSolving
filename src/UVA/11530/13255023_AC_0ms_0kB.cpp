#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    cin >> T;
    cin.ignore();

    for(int t = 1; t <= T; t++){
        string arr;
        getline(cin,arr);
        int ck = 0,len = arr.length();
        for(int i = 0; i < len; i++){

            if(arr[i] == 'a' || arr[i] == 'b' || arr[i] == 'c')
                ck+= (arr[i] - 'a')+1;

            else if(arr[i] == 'd' || arr[i] == 'e' || arr[i] == 'f')
                ck+= (arr[i] - 'd')+1;

            else if(arr[i] == 'g' || arr[i] == 'h' || arr[i] == 'i')
                ck+= (arr[i] - 'g')+1;

            else if(arr[i] == 'j' || arr[i] == 'k' || arr[i] == 'l')
                ck+= (arr[i] - 'j')+1;

            else if(arr[i] == 'm' || arr[i] == 'n' || arr[i] == 'o')
                ck+= (arr[i] - 'm')+1;

            else if(arr[i] == 'p' || arr[i] == 'q' || arr[i] == 'r' || arr[i] == 's')
                ck+= (arr[i] - 'p')+1;

            else if(arr[i] == 't' || arr[i] == 'u' || arr[i] == 'v')
                ck+= (arr[i] - 't')+1;

            else if(arr[i] == 'w' || arr[i] == 'x' || arr[i] == 'y' || arr[i] == 'z')
                ck+= (arr[i] - 'w')+1;

            else if(arr[i] == ' ')
                ck+=1;
        }
        cout << "Case #" << t << ": " << ck << endl;
    }
    return 0;
}
