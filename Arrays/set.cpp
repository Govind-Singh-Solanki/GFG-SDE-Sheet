// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
#include <bits/stdc++.h>

using namespace std;

void printPairs(int arr[], int arr_size, int sum)
{
	unordered_set<int> s;
	for (int i = 0; i < arr_size; i++)
	{
		int temp = sum - arr[i];

		if (s.find(temp) != s.end())
			cout << "Pair with given sum "
				<< sum << " is (" << arr[i] << ","
					<< temp << ")" << endl;

		s.insert(arr[i]);
	}
}

/* Driver Code */
int main()
{
	int A[] = { 3, 2, 4};
	int n = 6;
	int arr_size = sizeof(A) / sizeof(A[0]);

	// Function calling
	printPairs(A, arr_size, n);

	return 0;
}
