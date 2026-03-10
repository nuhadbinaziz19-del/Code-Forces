#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    int smallest = INT_MAX, index;
    for(int i = 0; i<n; i++) {
        cin>>A[i];
    }
    for(int i = 0; i<n; i++) {
        if(A[i] < smallest) {
            smallest = A[i];
            index = i;
        }
    }
    cout<<smallest<<" "<<index+1<<endl;
    return 0;
}
