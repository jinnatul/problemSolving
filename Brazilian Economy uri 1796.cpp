#include <iostream>
using namespace std;

int main(){
long long int num,Q,ok = 0,notOk = 0;
cin>>Q;
for(int i = 0; i<Q; i++){
    cin>>num;
    if(num==0)
        ok++;
    else if(num==1)
        notOk++;
}
if(ok>notOk)
    cout<<"Y"<<endl;
else
    cout<<"N"<<endl;

}
