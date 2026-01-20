/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    var n=0;
    var m=0;
    for(const i of s){
        n+=i.charCodeAt(0);
    }
    for(const i of t){
        m+=i.charCodeAt(0);
    }
    return String.fromCharCode(m - n);;

};