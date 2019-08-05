#include<bits/stdc++.h>
using namespace std;

string k, s1="",s;
vector<string>vc,temp;
int n, ar[5][5];

void rotateleft(){
    temp;
    for(int j=n-1; j>=0; j--){
        s1="";
        for(int i=0; i<n; i++){
            if(vc[i][j]=='v')s1+='>';
            else if(vc[i][j]=='>')s1+='^';
            else if(vc[i][j]=='^')s1+='<';
            else if(vc[i][j]=='<')s1+='v';
            else s1+=vc[i][j];
        }
        temp.push_back(s1);
    }
    vc=temp;
    temp.clear();
}

void rotateright(){
    temp;
    for(int j=0; j<n; j++){
        s1="";
        for(int i=n-1; i>=0; i--){
            if(vc[i][j]=='v')s1+='<';
            else if(vc[i][j]=='>')s1+='v';
            else if(vc[i][j]=='^')s1+='>';
            else if(vc[i][j]=='<')s1+='^';
            else s1+=vc[i][j];
        }
        temp.push_back(s1);
    }
    vc=temp;
    temp.clear();
}

int main(){
    cin >> n>>k;
    for(int i=1; i<=n; i++){
        cin>>s;
        vc.push_back(s);
    }
    for(int i=0; i<k.size(); i++){
        if(k[i]=='R')rotateright();
        else rotateleft();
    }
    for(int i=0; i<n; i++){
        cout<<vc[i]<<endl;
    }

    return 0;
}
