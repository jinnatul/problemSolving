#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

int main() {

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
#endif

    ll n, m, num, nDigit, tc, t = 1;

    sc1(tc);
    while (tc--) {
        sc2(n, m);
        cout << "Case " << t++ << ":" << endl;
        deque<ll> dQ;
        while (m--) {
            string str;
            cin >> str;
            if(str[5] == 'e' || str[5] == 'i') {
                sc1(num);
                if(dQ.size() == n) {
                    cout << "The queue is full" << endl;
                    continue;
                }
                if(str[5] == 'e') {
                    dQ.push_front(num);
                    cout << "Pushed in left: " << num << endl;
                }
                else {
                    dQ.push_back(num);
                    cout << "Pushed in right: " << num << endl;
                }
            }
            else {
                if(dQ.size() == 0) {
                    cout << "The queue is empty" << endl;
                    continue;
                }

                if(str[5] == 'f') {
                    num = dQ.front();
                    dQ.pop_front();
                    cout << "Popped from left: " << num << endl;
                }
                else {
                    num = dQ.back();
                    dQ.pop_back();
                    cout << "Popped from right: " << num << endl;
                }
            }
        }
    }


#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

}
