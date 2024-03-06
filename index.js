const simplecalc = require("./스크립트/단순한/단순한")
const rootscalculator = require('./스크립트/2차/2차')


exports.roots = function (a, b, c) {
    return rootscalculator.roots(a, b, c)
}

exports.printMsg = function () {
    console.log("This is a message from the demo package");
}
exports.add = function (item1, item2) {
    return simplecalc.add(item1, item2)
}

exports.sub = function (item1, item2) {
    return simplecalc.substract(item1, item2)
}

exports.div = function (item1, item2) {
    return simplecalc.divide(item1, item2)
}

exports.mul = function (item1, item2) {
    return simplecalc.multiply(item1, item2)
}

