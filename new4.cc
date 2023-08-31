#include <iostream>
using namespace std;
int main()

{ int n;
    cin >> n; // input for total customers 
    if (n==0){
        cout<< 0;

    }else {

    int cust[n] = {};
    for (int i = 0 ; i < n ; i++){
        cin >> cust[i]; // input for their budget and making an array

    } 
    // SORTING ARRAY FROM MIN TO MAX:
    for (int i = 0 ; i < n ; i++){
        for (int j = i+1 ; j<n ; j++){
            if (cust[i]>cust[j]){
                int temp = cust[j];
                cust[j] = cust[i];
                cust [i] = temp;

            }
        }
    }
    // REVENUE ARRAY
    int revenue[n] = {};
    for (int i=0; i<n ; i++){
        revenue[i] = cust[i] * (n-i);

    } // SORTING REVENUE ARRAY
    for (int i = 0 ; i < n ; i++){
        for (int j = i+1 ; j<n ; j++){
            if (revenue[i]>revenue[j]){
                int temp = revenue[j];
                revenue[j] = revenue[i];
                revenue [i] = temp;

            }
        }
    }

    cout<< revenue[n-1]; // PRINTING MAX REVENUE
}
   return 0;
}
