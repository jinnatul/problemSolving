#include<stdio.h>
int main()
{
long long int i,T1,N,A[100],j,B[10001],M,p=0,l,k;
scanf("%lld",&T1);
for(i=1;i<=T1;i++)
{
for(k=0;k<=10001;k++)
{
B[k]=0;
}
scanf("%lld",&N);
for(j=0;j<N;j++)
{
scanf("%lld",&A[j]);
M=A[j];
B[M]+=1;
}
p=0;
for(j=0;j<=10001;j++)
{
if(B[j]>p)
{
p=B[j];
l=j;
}
}
printf("%lld %lld\n",l,p);
}
return 0;
}