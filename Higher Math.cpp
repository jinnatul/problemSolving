#include<stdio.h>
int main()
{
long long int a,b,c,t,i,d,cas=1;
 scanf("%lld",&t);
while(t--)  {
    scanf("%lld%lld%lld",&a,&b,&c);
 
if(((a*a)+(b*b)==c*c)||((b*b)+(c*c)==a*a) ||((c*c)+(a*a)==b*b)) {
    printf("Case %lld: yes\n",cas);
   cas++;
 }
  else{
   printf("Case %lld: no\n",cas);
   cas++;
 }
 }
 return 0;
}
