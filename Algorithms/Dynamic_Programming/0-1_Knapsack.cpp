/*
*	author 	: nxtsourav7
*	created : 2024-02-05 09:57:03
*/
#include<bits/stdc++.h>
using namespace std;


#define wt first
#define val second

int main(void) {
    int n;
    cin >> n;
    vector< pair<int, int> > v(n+1);
    for(int i=1; i<=n; ++i) {
        cin >> v[i].wt; // weight
        cin >> v[i].val; // value or profit
    }
    // knapsack size
    int k;
    cin >> k;

    vector< vector<int> > dp(n+1, vector<int>(k+1, 0));
    // int dp[n+1][k+1] = {0};
    for(int item=1; item<=n; ++item) {
        for(int weight=1; weight<=k; ++weight) {
            if(v[item].wt > weight) {
                dp[item][weight] = dp[item-1][weight];
            }
            else {
                dp[item][weight] = max(dp[item-1][weight], v[item].val+dp[item-1][(weight-v[item].wt)]);
            }
        }
    }
 
    // max Profit
    cout << dp[n][k] << "\n";

    // selected item
    int item = n;
    int weight = k;
    while(item > 0) {
        if(dp[item][weight] == dp[item-1][weight]) {
            item--;
        }
        else {
            cout << item << " ";
            weight -= v[item].first;
            item--;
        }
    }
    cout << "\n";


    for(int item=0; item<=n; ++item) {
        for(int weight=0; weight<=k; ++weight) {
            cout << dp[item][weight] << " ";
        }
        cout << "\n";
    }

    return 0;
}