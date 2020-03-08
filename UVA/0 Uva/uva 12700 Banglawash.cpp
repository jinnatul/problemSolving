#include<bits/stdc++.h>

using namespace std;

int main()
{
   int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t)
    {
        int n, B(0), W(0), A(0), D(0);
        
        cin >> n;
        
        for (int i = 0; i < n; ++i)
        {
            char input;
            cin >> input;
            switch (input)
            {
            case 'B':
                ++B;
                break;
            case 'W':
                ++W;
                break;
            case 'A':
                ++A;
                break;
            default:
                ++D;
                break;
            }
        }
        
        cout << "Case " << t << ": ";
        
        if (A == n)
            cout << "ABANDONED";
        else if (B == W)
            cout << "DRAW " << B << ' ' << D;
        else if (W + A == n)
            cout << "WHITEWASH";
        else if (B + A == n)
            cout << "BANGLAWASH";
        else
        {
            if (B > W)
                cout << "BANGLADESH " << B << " - " << W;
            else
                cout << "WWW " << W << " - " << B;
        }
        cout << '\n';
    }
 
}
