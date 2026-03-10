#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++) {
        cin>>A[i];
        if(A[i] <= 10) cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
    return 0;
}
