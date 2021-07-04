/*3. Given a sorted array A of size N, delete all the duplicates elements from A.
eg: N = 5
Array = {2, 2, 2, 2, 2}
Output: 2*/
 Solution:

#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
	if (n==0 || n==1)
		return n;

	
	int j = 0;

	for (int i=0; i < n-1; i++)
		if (arr[i] != arr[i+1])
			arr[j++] = arr[i];

	arr[j++] = arr[n-1];

	return j;
}


int main()
{
	int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	n = removeDuplicates(arr, n);


	for (int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}

