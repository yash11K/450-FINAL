#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Move all negative numbers to begining and positive to end with constant extra space

int rearrange(int a[], int n)
{
    int left = 0;
    int right = (n - 1);

    while (right >= left)
    {
        if (a[left] < 0)
            left++;
        else
            swap(a[left], a[right]);
        right--;
    }
}

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i){
            cin >> arr[i];
        }

        rearrange(arr, n);
        printarray(arr, n);
    }
    return 0;
}