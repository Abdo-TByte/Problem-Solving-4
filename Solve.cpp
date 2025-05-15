#include<iostream>
#include<cstdlib>
using namespace std;

int RandomNum() {
	int y = rand() % (100);
	return y;
}

void setarrey(int z[],int NumberofElements) {
	
	for (int i = 0; i < NumberofElements; i++) z[i] = RandomNum();
}



void PrintArray(int arr[],int NumberofElements) {

	for (int i = 0; i < NumberofElements; i++)cout << arr[i] << "  ";
}

void SumTwoArraysOnThird(int arr[], int arr2[], int Sum[],int NumberofElements) {
	for (int i = 0; i < NumberofElements; i++)Sum[i] = arr[i] + arr2[i];
}

int main() {
	srand((unsigned)time(NULL));

	cout << "Enter Your Array's Length : "; int NumberofElements; cin >> NumberofElements;
	//Array 1
	int arr[100];
	cout << "\n\nFirst Array : ";
	setarrey(arr,NumberofElements);
	PrintArray(arr, NumberofElements);

	//Array 2
	int arr2[100];
	cout << "\n\n\nSecond Array : ";
	setarrey(arr2, NumberofElements);
	PrintArray(arr2, NumberofElements);

	//Sum Array
	int Sum[100];
	cout << "\n\n\nArray of Sums : ";
	SumTwoArraysOnThird(arr, arr2, Sum, NumberofElements);
	PrintArray(Sum, NumberofElements);
	cout << endl;


	return  0;
}