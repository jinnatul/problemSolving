#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;


//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

#define mx 100000000
#define pf(a) cout<<a<<endl

int main()
{
    ll i=1,j=0,t,k=0,l,a=0,b,d1,d2,m1,m2,y1,y2,m=0,n,ck=0,dk=2;

    char arr[100];

    while(1){

        cin>>arr;

        if(strcmp(arr,"#")==0)
            return 0;
        printf("Case %d: ",i++);

        if(strcmp(arr,"HELLO")==0){

            printf("ENGLISH\n");
        }
        else if(strcmp(arr,"HOLA")==0){

            printf("SPANISH\n");
        }
        else if(strcmp(arr,"HALLO")==0){

            printf("GERMAN\n");
        }
        else if(strcmp(arr,"BONJOUR")==0){

            printf("FRENCH\n");
        }
        else if(strcmp(arr,"CIAO")==0){

            printf("ITALIAN\n");
        }
        else if(strcmp(arr,"ZDRAVSTVUJTE")==0){

            printf("RUSSIAN\n");
        }
        else{
            printf("UNKNOWN\n");
        }
    }
}
