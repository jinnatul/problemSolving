#include <string>
#include <iostream>

using namespace std;

int main()
{
    int brr[128], cost(1);
    
    for (int i = 'a'; i <= 'z'; ++i, ++cost)
    {
        brr[i] = cost;
        
        if (cost > 2 && i != 'r' && i != 'y')
            cost = 0;
    }
    brr[' '] = 1;
    
    int T;
    
    cin >> T;
    
    
    string arr;
    getline(cin, arr);  
    for (int j = 1; j <= T; ++j)
    {
        getline(cin, arr);
        int totalCost = 0;
        
        for (string::const_iterator iter = arr.begin(); iter != arr.end(); ++iter)
            totalCost += brr[*iter];
        
        cout << "Case #" << j << ": " << totalCost << '\n';
    }
}