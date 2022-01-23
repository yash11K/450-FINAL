// { Driver code Start
#include <bits/stdc++.h>
using namespace std;

// } Driver code ends here

void sort012(int a[], int n)
    {
        // code
        int low = 0;
        int hi = n - 1;
        int mid = 0;

        // program will run untill mid == hi
        while (mid <= hi)
        {
            switch (a[mid])
            {
            case 0:
                swap(a[mid], a[low]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid], a[hi]);
                hi--;
                break;
            }
        }
    }

    void printarray(int a[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }

// driver code starts here
int main()
    {
    int tc = 0;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort012(a, n);
        printarray(a,n);
    }
    return 0;
    }