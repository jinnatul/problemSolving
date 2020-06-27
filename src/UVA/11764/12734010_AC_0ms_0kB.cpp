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

int arr[1000],brr[1006];

int main()
{
   int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int n;

        cin >> n;

        int increase(0), decrease(0);

        int previous, current;

        cin >> previous;

        for (int i = 1; i < n; ++i)
        {
            cin >> current;

            if (current > previous)
                ++increase;
            else if (current < previous)
                ++decrease;

            previous = current;
        }

        cout << "Case " << t << ": " << increase << " " << decrease <<'\n';
    }
}
