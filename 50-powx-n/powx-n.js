/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
 var myPower=function(x,n){
    if(n===0 ) return 1;
    if(n<0) return myPower(1/x,-n);
    
    if(n%2===0) return myPower(x*x,n/2);
    else return x*myPower(x*x,(n-1)/2);
 };
var myPow = function(x, n) {
    return myPower(x,n);
};