// const moduleQRoots = require('../2차/2차')

// let NoRealRoots = moduleQRoots.roots(1, 2, 3)
// console.info('::::::::::::::::::::::::NO REAL ROOTS::::::::::::::::::::::::')
// console.log(NoRealRoots);
// console.log('1X^2 + 2X + 3')
// let OneRealRoot = moduleQRoots.roots(1, 2, 1)
// console.info('::::::::::::::::::::::::ONE REAL ROOTS::::::::::::::::::::::::')
// console.log(OneRealRoot );
// console.log('1X^2 + 2X + 1')
// let TworealRoots = moduleQRoots.roots(1, 3, 1)
// console.info('::::::::::::::::::::::::NO REAL ROOTS::::::::::::::::::::::::')
// console.log(TworealRoots );
// console.log('1X^2 + 3X + 1')


const moduleQRoots = require('entitytocode')

let NoRealRoots = moduleQRoots.roots(1, 2, 3)
console.info('::::::::::::::::::::::::NO REAL ROOTS::::::::::::::::::::::::')
console.log(NoRealRoots);
console.log('1X^2 + 2X + 3')
let OneRealRoot = moduleQRoots.roots(1, 2, 1)
console.info('::::::::::::::::::::::::ONE REAL ROOTS::::::::::::::::::::::::')
console.log(OneRealRoot);
console.log('1X^2 + 2X + 1')
let TworealRoots = moduleQRoots.roots(1, 3, 1)
console.info('::::::::::::::::::::::::NO REAL ROOTS::::::::::::::::::::::::')
console.log(TworealRoots);
console.log('1X^2 + 3X + 1')
