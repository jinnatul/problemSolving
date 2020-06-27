#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000010
#define mod 10000007
#define PI acos(-1.0)


ll binaryarray[100], arr[10000];
ll finalans, givennum, finalcount;

vector <ll> vc, vcfinal;

void DecToBinary(ll DecNum, ll size) {

    binaryarray[size];
    memset(binaryarray, 0, sizeof(binaryarray));
    ll j = 0;
    while (DecNum > 0) {
        binaryarray[j++] = DecNum % 2;
        DecNum /= 2;
    }
        ll sum = 0;

    vc.clear();

        for (ll i = size - 1; i >= 0; i--)
        {
            if(binaryarray[i]){
                sum += arr[i];
                vc.push_back(arr[i]);
            }
        }
        reverse(vc.begin(), vc.end());

        if(sum >= finalans && sum <= givennum){
            if(sum == finalans){
                finalans = sum;
                if(vc.size() > vcfinal.size()) {
                    vcfinal.clear();
                    copy(vc.begin(), vc.end(), back_inserter(vcfinal));
                }
            }
            else{
                finalans = sum;
                vcfinal.clear();
                copy(vc.begin(), vc.end(), back_inserter(vcfinal));
            }
        }
        vc.clear();

}



int main()
{
    ll tc,num, t = 0, a, b;

    while (scanf("%lld %lld", &givennum, &num)!= EOF) {

        vc.clear(), vcfinal.clear();
        finalans = 0;
        arr[num];

        for(ll i = 0; i < num; i++)
            sc1(arr[i]);

        ll binnum = pow(2, num)-1;

        for(ll i = 0; i <= binnum; i++){
            DecToBinary(i, num);
        }

        for(ll i = 0; i < vcfinal.size(); i++){
            cout << vcfinal[i] << " ";
        }
        cout << "sum:" << finalans << endl;
    }

    return 0;
}