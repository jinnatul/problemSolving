#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<vector> 

 using namespace std;
 
 int n;
 map<int, int> ma;
 vector<int> va;
 
int main() {

    while(scanf("%d", &n) == 1) {
        if(ma[n] == 0) 
          va.push_back(n);
          ma[n]++;
    }

    for(int i = 0; i < va.size(); i++) {
        printf("%d %d\n", va[i], ma[va[i]]);
    }
}
