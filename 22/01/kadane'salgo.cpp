// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class solution
{
public:
    int max = 0;
    int cursum = 0;
    // tempsum: to check if sum is suitable max
    // max: variable to store sum
    // arr: input array of
    //  n: size of array
    //  Function to find the sum of contagious array with maximum sum.

    long long maxSubarraySum(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cursum += arr[i];
            if (cursum > max)
                max = cursum;

            if (cursum < 0)
                cursum = 0;
        }
        return max;
    }
};

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends