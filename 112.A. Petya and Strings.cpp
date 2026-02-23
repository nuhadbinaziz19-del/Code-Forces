#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string a,b;
    cin>>a>>b;
    int n =a.size();A
    for (int i=0;i<n;i++){
        if (a[i]>'Z') a[i]+=('A'-'a');
        if (b[i]>'Z') b[i]+=('A'-'a');
    } if (a<b)
    cout<<"-1\n";
    else if (a>b)
        cout<<"1\n";
        else
        cout<<"0\n";
return 0;
}
