const addon = require('./build/Release/2차');

exports.roots = function Roots(a, b, c) {
    let outputarr = [];
    let discriminatorRaw = addon.판별자(a, b, c);
    let discriminator = Math.sqrt(discriminatorRaw);
    let discriminatorIMAGINARY = Math.sqrt(discriminatorRaw * -1);

    if (discriminatorRaw > 0)
    {
        // console.log(addon.POS판별자(1, 2, discriminator))
        outputarr.push(2)
        outputarr.push(addon.POS판별자(a, b, discriminator))
        outputarr.push(addon.NEG판별자(a, b, discriminator))
    }


    if (discriminatorRaw === 0)
    {
        // console.log(addon.POS판별자(1, 2, discriminator))
        outputarr.push(1)
        outputarr.push(addon.POS판별자(a, b, discriminator))
        outputarr.push(addon.NEG판별자(a, b, discriminator))
    }


    if (discriminatorRaw < 0)
    {
        outputarr.push(0)
        outputarr.push(addon.POS판별자(a, b, discriminatorIMAGINARY))
        outputarr.push(addon.NEG판별자(a, b, discriminatorIMAGINARY))

        // console.log(addon.POS판별자(1, 2, discriminatorIMAGINARY))

    }
    return outputarr;
}
