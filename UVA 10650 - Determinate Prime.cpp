#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 1000001

bool check[size1];
vector <ll> prime;

void seive()
{
    memset(check, true, sizeof(check));

    for(ll i = 4; i < size1; i += 2) check[i] = false;

    check[0] = check[1] = false;

    for(ll i = 3; i * i < size1; i+=2){
        if(check[i]){
            for(ll j = i * i; j < size1; j += (2 * i)) check[j] = false;
        }
    }

    for(ll i = 1; i < size1; i++){
        if(check[i]) prime.push_back(i);
    }
}


void print(int left, int right)
{

    cout << prime[left];
    for(int i = left + 1; i < right; i++){
        cout << " " << prime[i];
    }
    cout << " " << prime[right] << endl;
}

int main() {

    seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    int left, right;
    while (cin >> left >> right){

        if(left == 0 && right == 0) break;

        if(left > right) swap(left, right);

        int i = 0;

        while (prime[i] < left) i++;


        while (prime[i + 2] <= right){

            if(prime[i + 2] - prime[i + 1] == prime[i + 1] - prime[i]){
                int startIndex = i;
                int endIndex = i + 2;
                int dif = prime[i + 1] - prime[i];

                while (i + 3 < prime.size() && prime[i + 3] - prime[i + 2] == dif){
                    endIndex++;
                    i++;
                }

                if(prime[endIndex] <= right){
                    if(startIndex == 0 || prime[startIndex] - prime[startIndex - 1] != dif){
                        print(startIndex, endIndex);
                    }
                }
                else
                    break;
            }
            i++;
        }

    }

    return 0;
}
