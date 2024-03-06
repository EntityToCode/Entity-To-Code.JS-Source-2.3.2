const addon = require('./build/Release/단순한');


var x = addon.추가하다(2, 3); // add

var y = addon.보결(8, 3); // sub

var p = addon.분할(4, 2); // div
// 
var o = addon.곱셈(2, 3); //mul

// console.log("add" + x)
// console.log("sub" + y)
// console.log("div" + p)
// console.log("mul" + o)

exports.add = function add(item1, item2) {
    return addon.추가하다(item1, item2);
}
exports.substract = function substract(item1, item2) {
    return addon.보결(item1, item2);
}
exports.divide = function divide(item1, item2) {
    return addon.분할(item1, item2);
}
exports.multiply = function multiply(item1, item2) {
    return addon.곱셈(item1, item2);
}