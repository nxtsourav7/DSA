/*
*	author 	: nxtsourav7
*	problem : Pick k numbers out of n 
*               numbers such that the sum of
*               these k numbers is the largest.
*	created : 2023-09-21 11:25:28
*/
#include<bits/stdc++.h>
using namespace std;


int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it : v) cin >> it;
    int k;
    cin >> k;

    sort(v.rbegin(), v.rend());
    for(int i=0; i<k; ++i) {
        cout << v[k] << " ";
    }
    cout << "\n";
    
    return 0;
}