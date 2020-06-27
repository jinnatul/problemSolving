#include<cstdio>
#include<iostream>
#include<string>
 
using namespace std;
 
int n, m;
string rule;
string dict[110], digits[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
 
void generate(int v, string s) {
    if(v == rule.size()) {
        cout << s << endl;
        return;
    }
    switch(rule[v]) {
        case '#':
            for(int i = 0; i < n; i++)
                generate(v + 1, s + dict[i]);
            break;
        case '0':
            for(int i = 0; i < 10; i++)
                generate(v + 1, s + digits[i]);
            break;
    }
}
 
int main() {
    while(scanf("%d", &n) == 1) {
        printf("--\n");
        for(int i = 0; i < n; i++)
            cin >> dict[i];
        scanf("%d", &m);
        for(int i = 0; i < m; i++) {
            cin >> rule;
            generate(0, "");
        }
    }
}