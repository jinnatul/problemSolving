#include<bits/stdc++.h>

using namespace std;

int main(){
double d=0;
int t,i;
scanf("%d",&t);
double arr[t];
for(i=1;i<=t;i++){
    scanf("%lf",&arr[i]);
  d=d+arr[i];

}
  printf("%lf\n",d/(double)t);

return 0;
}