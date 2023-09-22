/*
*	author 	: nxtsourav7
*	problem : Count Duplicates
*	created : 2023-09-21 11:25:28
*/
#include<bits/stdc++.h>
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;


    int sn=s.size();
    int arr[26]={0};

    //oparetion
    for(int i=0;i<sn;i++) {
        arr[s[i]-'a']++;
    }

    //output
    for(int i=0;i<26;i++){
        if(arr[i]){
            cout<< char(i+'a')<<" : "<<arr[i]<<"\n";
        }
    }

    return 0;
}