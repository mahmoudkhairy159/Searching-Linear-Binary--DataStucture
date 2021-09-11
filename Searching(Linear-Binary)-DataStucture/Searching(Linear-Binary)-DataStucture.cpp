#include <iostream>
using namespace std;

void linearSearch(int*arr,int sizee,int value) {
	for (int i = 0; i < sizee; i++) {
		if (arr[i] == value) {
			cout <<value <<" is found in position : " << i << endl;
			return;
		}
	}
	cout << value<<" doesn't exist \n";
}

int binarySearch(int a[], int beg,int end, int value) {
	int mid;
	if (end >= beg)
	{
		mid = (beg + end) / 2;
		if (a[mid] == value)
		{
			return mid ;
		}
		else if (a[mid] < value)
		{
			return binarySearch(a, mid+1 , end, value);
		}
		else if(a[mid] > value)
		{
			return binarySearch(a, beg, mid -1, value);
		}

	}
	return -1;
}

int main()
{
	//linear search
	int value=6;
	int arr[5] = {2,4,6,8,10};
	int sizee = 5;
	linearSearch(arr, sizee, value);
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";

	//binary search (the list must be sorted)
	int a[10] = { 16, 19, 20, 23, 45, 56, 78, 90, 96, 100 };
	value = 23;
	int pos;
	pos = binarySearch(a,0,10, value);
	if (pos == -1) {
		cout << value << " doesn't exist \n";
	}
	else {
		cout << value << " is found in position : " << pos<< endl;
	}
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";

	system("pause>0");
}


