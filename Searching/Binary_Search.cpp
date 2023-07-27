#include<bits/stdc++.h>
using namespace std;


int Binary_Search(int array[] , int n , int x) {
    int left = 0;
    int right = n-1;
    
    while(left<=right) {
        int mid = left + (right-left)/2; // Can't be Overflow

        if(array[mid] == x) return mid;

        if(array[mid] < x) left = mid+1;
        else right = mid-1;
    }return -1;
}


int main() {
    int n;cin >>n;

    int array[n];
    for(auto &a : array) cin >> a;

    cout << "Enter Searching Element : ";
    int x;cin >> x;

    int ans = Binary_Search(array , n , x);
    if(ans != -1) {
        cout << "Found !\n";
        cout << "Position : " << ans+1 << '\n';
    }
    else {
        cout << "Not Found !\n";
    }

    return 0;
}