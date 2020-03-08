#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

//int gcd(int a, int b) { if (b == 0)  return a;   else return gcd(b, a%b); }
//int lcm(int a, int b) { return (a*b)/gcd(a,b); }

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

