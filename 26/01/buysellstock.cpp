#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// BRUTE FORCE
// class Solution
// {
// private: int min = INT_MIN;
// public:
//     int maxProfit(vector<int> & prices)
//     {
//         for (int i = 0; i < prices.size(); i++)
//         {
//             for (int j = i; j < prices.size(); j++)
//             {
//                 if ((prices[j] - prices[i] > min))
//                     min = (prices[j] - prices[i]);
//             }
//         }
//         return min;
//     }
// };
class Solution
{
private:
    int minprice = INT_MAX;

private:
    int maxprofit = 0;

    int maxProfit(vector<int> &prices)
    {
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
    }
}