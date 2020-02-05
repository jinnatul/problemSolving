#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<stack>
#include<algorithm>
using namespace std;

char operat(char ch)
{
    if(ch == '*'){
        return 1;
    }
    else if(ch == '/'){
        return 2;
    }
    else if(ch == '+'){
        return 3;
    }
    else if(ch == '-'){
        return 4;
    }
    else
        return false;
}

char operand()
{

}

int calculation()
{

}

int main()
{
    stack < int > s;
    int x, y, res, n, b, c;
    cin >> n;
    cin.get();
    char ch[n][100];
    for(int i = 0; i < n; i++){
        cin >> ch[i];
        if(!operat(ch[i][0])){
            int a = 0, ln = strlen(ch[i]);
            for(int po = ln-1, j = 0; po != -1; po--){
                a += pow(10.0, po) * (ch[i][j++] - '0');
            }
            s.push(a);
        }
        else{
            if(operat(ch[i][0]) == 1){
                int g = s.top();
                s.pop();
                int k = s.top();
                s.pop();
                k = g * k;
                s.push(k);
            }
            else if(operat(ch[i][0]) == 2){
                int g = s.top();
                s.pop();
                int k = s.top();
                s.pop();
                k = g / k;
                s.push(k);
            }
            else if(operat(ch[i][0]) == 3){
                int g = s.top();
                s.pop();
                int k = s.top();
                s.pop();
                k = g + k;
                s.push(k);
            }
            else if(operat(ch[i][0]) == 4){
                int g = s.top();
                s.pop();
                int k = s.top();
                s.pop();
                k = g - k;
                s.push(k);
            }
        }
    }
    cout << s.top() << endl;
    return 0;
}
