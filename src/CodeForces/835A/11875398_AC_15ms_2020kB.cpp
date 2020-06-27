#include <bits/stdc++.h>

using namespace std;
int s, v1, v2, t1, t2;


int main(){


    cin >> s >> v1 >> v2 >> t1 >> t2;

    int one = s*v1 + 2*t1;
    int two = s*v2 + 2*t2;

    if(one > two)
        cout << "Second" << endl;
    else if(two > one)
        cout << "First" << endl;
    else
        cout << "Friendship" << endl;





    return 0;
}