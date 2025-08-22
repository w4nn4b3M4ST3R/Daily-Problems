/*
- Traverse the array only once since the operation is sequential - you must buy before you sell.
- At each index 'i', update `maxProfit` and buy-time to maximize the profit from the transaction.
*/
int maxProfit(vector<int>& prices) {
    int buy = 0, maxProfit = 0, size = prices.size();
    for(int i = 1; i<size;i++){
        int profit = prices[i] - prices[buy];
        if(profit > maxProfit)  maxProfit = profit;
        if(prices[i]< prices[buy]) buy = i;
    }
    return maxProfit;
}