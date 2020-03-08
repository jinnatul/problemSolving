#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    int x, y;
	cin >> x >> y;
	if (y == 0) {
		cout << "No\n";
		return 0;
	}
	if(y == 1 && x == 0){
		cout << "Yes\n";
		return 0;
	}else if(y == 1 && x > 0){
		cout << "No\n";
		return 0;
	}
	int c = y - 1;
	x -= c;
	if(x < 0 || (x % 2 == 1)){
		cout << "No\n";
	}else cout << "Yes\n";
}
