/*
*	author 	: nxtsourav7
*	problem : Highest CGPA
*	created : 2023/10/17 22:12:15
*/
#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    string ID;
    int age;
    float cgpa;
};

student CSE[2][4];

student result() {
	student first;
	
	first.name = CSE[0][0].name;
	first.ID = CSE[0][0].ID;
	first.cgpa = CSE[0][0].cgpa;
	
	for(int i=0 ; i<2 ; ++i) {
		for(int j=0 ; j<4 ; ++j) {
			if(first.cgpa <= CSE[i][j].cgpa) {
				first.name = CSE[i][j].name;
				first.ID = CSE[i][j].ID;
				first.cgpa = CSE[i][j].cgpa;
			}
		}
	}
	
	return first;	
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	// input student data
	for(int i=0 ; i<2 ; ++i) {
		for(int j=0 ; j<4 ; ++j) {
			cin >> CSE[i][j].name;
			cin >> CSE[i][j].ID;
			cin >> CSE[i][j].age;
			cin >> CSE[i][j].cgpa;
		}
	}
	
	// calculation
	student first = result();
	
	// print First student Name , ID and CGPA
	cout << "Name : " << first.name << "\n";
	cout << "ID : " << first.ID << "\n";
	cout << fixed << setprecision(2);
	cout << "CGPA : " << first.cgpa << "\n";
	
    return 0;
}
