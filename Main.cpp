//Aydin Azari Farhad

#include <iostream>
#include <array>
using namespace std;

const int n{ 3 };

void transpose(int a[n][n],int b[n][n]) {
	int ii{ 0 }, jj{ 0 };//values for the b matrix
	for (int j = 0; j < n; j++) {//move one column
		for (int i = 0; i < n; i++) {//row by row
			b[ii][jj] = a[i][j];
			jj++;//next b matrix location
		}
		jj = 0;//next b matrix location
		ii++;//next b matrix location
	}
}

void rotate(int b[n][n], int c[n][n]) {
	int ii{ 0 }, jj{ 0 };//values for the c matrix
	for (int i = 0; i < n; i++) {
	for (int j = n-1; j >= 0; j--){//move from last column backwards
			c[ii][jj] = b[i][j];
			jj++;//next b matrix location
		}
		jj = 0;//next b matrix location
		ii++;//next b matrix location
	}
}


int main() {
	int arr[n][n] = { {1,2,3} , {4,5,6} , {7,8,9} };
	int t[n][n] = {0};
	int r[n][n] = { 0 };
	cout << "\nInitial Matrix: \n\n";
	for (int i = 0; i < n; i++) {//print intial matrix
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << " ";
			cout << "\t";
		}
		cout << endl;
	}
	cout << endl;

	cout << " \n\nPress any key to start operation...\n";
	system("pause");
	cout << endl;

	transpose(arr, t);
	cout << "\nTranspose: \n"<<endl;
	for (int i = 0; i < n; i++) {//print out the transp result
		for (int j = 0; j < n; ++j) {
			cout << t[i][j] << " ";
			cout << "\t";
		}
		cout << endl;
	}
	cout << endl;

	rotate(t, r);
	cout << "Rotate: \n" << endl;//print out the final result <<rot
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; ++j) {
			cout << r[i][j] << " ";
			cout << "\t";
		}
		cout << endl;
	}

	system("pause");
}
