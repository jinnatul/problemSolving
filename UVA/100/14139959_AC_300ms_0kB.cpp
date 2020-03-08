#include<bits/stdc++.h>

using namespace std;

long long int uva(long long int a);
long long morol(long long int a, long long int b){

    long long int ck=0,maxa;
   if(a>b)
    return morol(b,a);

    while(a<=b){
        maxa=uva(a);
        if(ck<maxa)
            ck = maxa;
        a++;
    }
    return ck;


}


long long int uva(long long int a){

 if(a==1)
    return 1;
 else if(a&1)
    return uva(3*a+1) + 1;
 else
    return uva(a/2) + 1;

}

int main(){

long long int i,m,n,a,s,b,k,ck=0;
 while(scanf("%lld %lld",&a, &b)!=EOF){
 printf("%lld %lld %lld\n",a,b,morol(a,b));

}
}
