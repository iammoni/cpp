int maximumToys(vector<int> prices, int k) {
sort(prices.begin(),prices.end());
    int totel=0;
    int count=0;
    for(int i=0;i<prices.size();i++){
        totel+=prices[i];
        if(totel<=k) count++;
        else break;
    }
    return count;
    

}