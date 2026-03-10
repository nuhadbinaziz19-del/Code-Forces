#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    int min = INT_MAX;
    int counter = 0;
    for(int i = 0; i<n; i++) {
        cin>>A[i];
    }
    for(int i = 0; i<n; i++) {
        if(A[i] < min) {
            min = A[i];
        }
    }
    for(int i = 0; i<n; i++) {
        if(A[i] == min) counter++;
    }
    if((counter%2) == 0 ) {
        cout<<"Unlucky";
    }
    else cout<<"Lucky";
    return 0;
}
