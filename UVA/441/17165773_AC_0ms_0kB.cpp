#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc, t=0;
    while(cin >> tc){
    if(tc==0) break;
    t++;
    
    if(t>1) cout << endl;
    
    int arr[tc];

    for(int i = 0; i< tc; i++) cin >> arr[i];

    for(int i = 0; i<tc-5; i++){
        for(int j = 1; j<tc-4; j++){
            for(int k = 2; k <tc-3; k++){
                for(int s = 3; s<tc-2; s++){
                    for(int s1 = 4; s1<tc-1; s1++){
                        for(int s2 = 5; s2<tc; s2++){
                        if(arr[i] < arr[j] && arr[j] < arr[k] && arr[k] < arr[s] && arr[s] < arr[s1] && arr[s1] < arr[s2])
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[s] << " " << arr[s1] << " " << arr[s2] << endl;
                }
            }
        }
      }
    }
   }
  }
}
