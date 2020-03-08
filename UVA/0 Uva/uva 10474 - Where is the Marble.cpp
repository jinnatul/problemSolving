#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int n, q, ck=0;
 
    while (cin >> n >> q) {

        if ( n == 0 && q == 0 ) 

            break;
 
        int arr[n];
 
        for ( int i = 0; i < n; i++ ) 

            cin>>arr[i];
 
        sort (arr, arr + n);
 
        printf ("CASE# %d:\n", ++ck);
 
        int mina;
        
        bool found;
 
        for ( int i = 0; i < q; i++ ) {
           
            cin >> mina;

            found = false;

            for ( int j = 0; j < n; j++ ) {

                if ( arr[j] == mina ){

                    printf ("%d found at %d\n", mina, j + 1);

                    found = true;
                    break;
                }
                else if ( arr[j] > mina ){
                    break;
                }
            }
 
            if ( !found ) printf ("%d not found\n", mina);
        }
    }

}
