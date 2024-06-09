/* Find the minimum length of the subarray you can choose to make array1 and array 2 same after performing the operation. 
 Note: are permutations of each other.
 */
#include <iostream>
using namespace std;

int main() {

	int t; // number of TestCases
	cin >> t;
  
	for(int i = 0; i< t; i++) //loop for each testcase
	{	
        int n;
        cin >> n;  //number of array elements
        int left_idx = 0,right_idx = n - 1;
		int a[n], b[n];

		for(int j = 0; j<n; j++) //input array 1
		{
			cin >> a[j];
		}
		for(int j = 0; j<n; j++) //input array 2
		{
			cin >> b[j];
		}
    //find the left most index where the arrays differ
       while(left_idx <= right_idx && (a[left_idx] == b [left_idx]))
		{
			left_idx++;
		}
	//find the right most index where the arrays differ
		while(right_idx >= left_idx && (a[right_idx]== b [right_idx]))
		{
			right_idx--;
		}
    //subrray from index left_idx to right_idx(including)
		cout << (right_idx - left_idx + 1) << endl;
	}
	return 0;
}