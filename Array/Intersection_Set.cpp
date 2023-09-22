/*
*	author 	: nxtsourav7
*	problem : Union Set
*	created : 2023-09-21 09:27:40
*/
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve() {
    int sz_array1;
    cin >> sz_array1;
    int array1[sz_array1];
    for(auto &a : array1) {
        cin >> a;
    }

    int sz_array2;
    cin >> sz_array2;
    int array2[sz_array2];
    for(auto &a : array2) {
        cin >> a;
    }

    for(int i=0 ; i<sz_array1 ; ++i) {
        for(int j=0 ; j<sz_array2 ; ++j) {
            if(array1[i]==array2[j]) {
                cout << array1[i] << " ";
            }
        }
    }

    cout << "\n";

}
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    /* TEST CASE */
    int tc = 1;
    // cin >> tc;
    for(int t=1 ; t<=tc ; t++) {
        solve();
    }

    return 0;
}