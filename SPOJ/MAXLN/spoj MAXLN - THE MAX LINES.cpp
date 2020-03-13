#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int tc, t = 1;
	cin >> tc;
	while(tc--) {
		double num, ans;
		cin >> num;
		ans = 0.25 + (4*num*num);
		printf("Case %d: %.2lf\n", t++, ans);
	}

	return 0;
}
