/**
 * @param {number[][]} grid
 * @return {number[]}
 */
var findMissingAndRepeatedValues = function(grid) {
    let n=grid.length;
    n=n*n;
    let sum;
    if(n%2==0){
        sum=(n/2)*(n+1);
    }
    else{
        sum=n*(n+1)/2;
    }
    let count=0;
    let freq={};
    let rep=0,mis=0;
    for(let i=0;i<grid.length;i++){
        for(let j=0;j<grid.length;j++){
            count+=grid[i][j];
            freq[grid[i][j]] = (freq[grid[i][j]] || 0) + 1;
            if (freq[grid[i][j]] === 2) rep=grid[i][j];
        }
    }
    mis=sum-count+rep;
    return [rep,mis];
};