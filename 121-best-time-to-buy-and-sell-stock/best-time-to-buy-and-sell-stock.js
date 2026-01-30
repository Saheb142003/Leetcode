/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let buy=prices[0]; let mp=0;
    for(let i=1;i<prices.length;i++){
        if(buy>prices[i]){
            buy=prices[i];
        }
        else {
            mp=Math.max(mp,prices[i]-buy);
        }
    } 
    return mp;
};