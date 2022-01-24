// Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
// Note: Return -1 if you can't reach the end of the array.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        if (n <= 1)
            return 0;
        if (arr[0] == 0)
            return -1;
        int mx = arr[0], step = arr[0], jump = 1, i = 1;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                return jump;
            mx = max(mx, i + arr[i]);
            step--;
            if (step == 0)
            {
                jump++;
                if (i >= mx)
                    return -1;
                step = mx - i;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends