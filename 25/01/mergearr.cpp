// Given 2 sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// User function template for C++


const int max = 10e6;
class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        // code here
        int count1 = 0;
        int count2 = 0;
        vector<bool> mark (false);

        for(int i=0; i<n; i++){
            mark[arr1[i]] = true;
        }

        for(int i=0; i<m; i++){
            mark[arr2[i]] = true;
        }

        while(count1 < n){
            for (int i=0; i < mark.size(); i++){
                if (mark[i] == true)
                    arr1[count1] = i;
                    count1++; 
            }
        }

        while(count2 < m){
            for (int i=0; i < mark.size(); i++){
                if (mark[i] == true)
                    arr2[count2] = i;
                    count2++; 
            }
        }
    }      

};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends