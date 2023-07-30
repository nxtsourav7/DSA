#include<bits/stdc++.h>
using namespace std;


int Linear_Search(int array[] , int n , int x) {
    for(int i=0 ; i<n ; i++){
        if(array[i]==x) return i;
    }return -1;
}


int main() {
    int n;cin >>n;

    int array[n];
    for(auto &a : array) cin >> a;

    // cout << "Enter Searching Element : ";
    int x;cin >> x;

    int ans = Linear_Search(array , n , x);
    if(ans != -1) {
        cout << "Found !\n";
        cout << "Position : " << ans+1 << '\n';
    }
    else cout << "Not Found !\n";

    return 0;
}