/*
*	author 	: nxtsourav7
*	created : 2024-02-05 09:57:03
*/
#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int, int> a, pair<int, int> b) {
    double PpW1 = (double)a.second/a.first;
    double PpW2 = (double)b.second/b.first;

    return (PpW1 > PpW2);
}

int main(void) {
    // number of item
    int n;
    cin >> n;
    vector< pair<int, int> > v(n);
    for(auto &[weight , profit] : v) {
        cin >> weight; 
        cin >> profit;
    }
    // knapsack size
    int k;
    cin >> k;
    
    // Sort the pair such that p[i]/w[i] >= p[i+1]/w[i+1]
    sort(v.begin(), v.end(), cmp);

    double max_profit = 0; 
    for(int i=0; i<n; ++i) {
        // first for weight
        // second for profit
        if(k > v[i].first) {
            max_profit += v[i].second;
            k -= v[i].first;
        }
        else {
            double temp = (double)k/v[i].first;
            max_profit += (temp*v[i].second);
            break;
        }
    }

    // max profit from fractional knapsack
    cout << max_profit << "\n";
    
    return 0;
}