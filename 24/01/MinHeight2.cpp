#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);

        // idea -> maximize the min ht & minimize the max ht
        int res = arr[n - 1] - arr[0];
        int maxi = arr[n - 1];
        int mini = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] - k < 0)
                continue;

            // minimum element will be either (next_elem - k) or (first_elem + k)
            mini = min(arr[0] + k, arr[i + 1] - k);

            // maximum element will be either (cur_elem + k) or (last_elem - k)
            maxi = max(arr[i] + k, arr[n - 1] - k);

            res = min(res, maxi - mini); // take min
        }

        return res;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        int k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}