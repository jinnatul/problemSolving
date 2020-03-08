#include <bits/stdc++.h>

using namespace std;

long long  b, i ,dim;

int main(){

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    string morol;

    cin >> morol;
    cin >> b;

    map < char, int> s;


    if(b > morol.size())
        return cout << "impossible" << endl, 0;

    for(i = 0; i < morol.size(); i++)
        s[morol[i] - 'a']++;

    dim = s.size();

    if(dim > b)
        return cout << "0" << endl, 0;

    cout << b - dim << endl;

    return 0;
}