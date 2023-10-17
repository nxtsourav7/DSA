/*
*	author 	: nxtsourav7
*	problem : Merge Sort
*	created : 2023/10/05 09:48:46
*/
#include<bits/stdc++.h>
using namespace std;


void Merge(int array[], int left, int mid, int right) {
	int helper[right+1];
	for(int i=left ; i<=right ; ++i) {
		helper[i]=array[i];
	}
	
	int i=left;
	int j=mid+1;
	int k=left;
	
	while(i<=mid && j<=right) {
		if(helper[i]<=helper[j]) {
			array[k] = helper[i];
			i++;
		}
		else {
			array[k] = helper[j];
			j++;
		}
		k++;
	}
	
	while(i<=mid) {
		array[k] = helper[i];
		i++;
		k++;
	}
	while(j<=right) {
		array[k] = helper[j];
		j++;
		k++;
	}
	
		
}
void Merge_Sort(int array[], int left, int right) {
	if(left<right) {
		int mid = left + (right-left)/2;
	
		Merge_Sort(array, left, mid);
		Merge_Sort(array, mid+1, right);
		Merge(array, left, mid, right);
	}
	
}


//sorted Array Print !!!
void print(int array[], int n) {
    for(int i=0 ; i<n ; i++) {
        cout << array[i] << " ";
    }
    cout << '\n';
}

//Driver Code !!
int main() {
    int n;cin >> n;

    int array[n];
    for(auto &a : array) cin >> a;

    Merge_Sort(array ,0, n-1);

    cout << "Sorted Array : ";
    print(array , n);


    return 0;
}
