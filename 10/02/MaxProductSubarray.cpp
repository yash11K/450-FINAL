#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    int currPro = 1; //stores product with each element
        int negMark; // marks Negative element 
        for (int i = 0; i < 0; i++){
            if (arr[i] == 0){
                i++; 
            }
            while (arr[i]!= 0 ){
                currPro = currPro * arr[i];
                
            } 
        }
        
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
