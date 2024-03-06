<h1>Entity to code SourceForge </h1>

Version | 1.0.0 | 2.0.0 | 2.1.0 | 2.2.0 | 2.3.0 | 2.3.1 
--- | --- | --- | --- |--- |--- |---
Stable | Yes | No | No | Yes | Yes | Yes


<a href="https://sourceforge.net/projects/entity-to-code/files/latest/download"><img alt="Download Entity-To-Code" src="https://a.fsdn.com/con/app/sf-download-button" width=276 height=48 srcset="https://a.fsdn.com/con/app/sf-download-button?button_size=2x 2x"></a>
<h2>New feats</h2>
<h3>2.3.2 (patch)</h3>
<p><b>readme fix</b></p>
<h3>2.3.1 (patch)</h3>
<p><b>Quadratic Roots function Availible</b></p>
<h3>2.3.0 (patch)</h3>
<p><b>HALTED</b></p>
<h3>2.2.3 (patch)</h3>
<p>Readme update</p>
<h3>2.2.2 (patch)</h3>
<p>Readme update</p>
<h3>2.2.1 (patch)</h3>
<p>Readme update</p>
<h3>2.2.0</h3>
<p>successful model with c++ integration</p>
<h3>2.1.0</h3>
<p>Buggy prototype with c++ integration</p>
<h3>2.0.0</h3>
<p>Faulty prototype with c++ integration</p>
<h3>1.0.0</h3>
<p>Simple string msg</p>

<h2>About</h2>
<p>A mathematical library for various different mathematical functions (prod) backed by c++ (node-gyp/nan)</p>
<h2>Installation</h2>

    npm i entitytocode

<h2>printMsg</h2>
<p>Versions: <b>1.0.0 + </b></p>
<p>Usage (nodeJS): </p>
    
    const package = require('entitytocode')
    package.printMsg();
<p>Output:</p>

    This is a message from the demo package

<h2>add</h2>
<p>Versions: <b>2.0.0 + </b></p>
<p>Disclaimer: Not stable in versions 2.0.0 - 2.1.0 </p>
<p>Types for parameters: Item1 = Int, Item2 = Int</p>
<p>Example (nodeJS): </p>
    
    const package = require('entitytocode')
    const X = package.add(1, 2)
    console.log(X)
<p>Output:</p>

    3

<h2>Sub</h2>
<p>Versions: <b>2.0.0 + </b></p>
<p>Disclaimer: Not stable in versions 2.0.0 - 2.1.0 </p>
<p>Types for parameters: Item1 = Int, Item2 = Int</p>
<p>Example (nodeJS): </p>
    
    const package = require('entitytocode')
    const X = package.sub(-1, 2)
    console.log(X)

<p>output:</p>

    -3

<h2>Mul</h2>
<p>Versions: <b>2.0.0 + </b></p>
<p>Disclaimer: Not stable in versions 2.0.0 - 2.1.0 </p>
<p>Types for parameters: Item1 = Int, Item2 = Int</p>
<p>Example (nodeJS): </p>
    
    const package = require('entitytocode')
    const X = package.mul(-3.2, 2.3)
    console.log(X)

<p>output:</p>

    -7.359999999999999


<h2>Div</h2>
<p>Versions: <b>2.0.0 + </b></p>
<p>Disclaimer: Not stable in versions 2.0.0 - 2.1.0 </p>
<p>Types for parameters: Item1 = Int, Item2 = Int</p>
<p>Example (nodeJS): </p>
    
    const package = require('entitytocode')
    const X = package.div(-1.5, 2)
    console.log(X)

<p>output:</p>

     -0.75


<h2>Quadratic Roots</h2>
<p>Versions: <b>2.3.1 + </b></p>
<p>Types for parameters: A = Int, B = Int, C = Int</p>
<p>Output: It returns an array with 3 values, <br/> 
    1: number of roots: If there are No roots then it will return 0, if there are one, then 1, if there are two then 2. <br/> 
    2 & 3: roots: In the calculation, two roots are returned, These are them, if there are only one root, both will be identical, and if there are none, item 1 will be 0 and it will return the imaginary roots</p>
<p>Example (nodeJS): </p>
    
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
    console.info('::::::::::::::::::::::::TWO REAL ROOTS::::::::::::::::::::::::')
    console.log(TworealRoots);
    console.log('1X^2 + 3X + 1')

<p>output:</p>

    ::::::::::::::::::::::::NO REAL ROOTS::::::::::::::::::::::::
    [ 0, 0.41421356237309515, -2.414213562373095 ]
    1X^2 + 2X + 3
    ::::::::::::::::::::::::ONE REAL ROOTS::::::::::::::::::::::::
    [ 1, -1, -1 ]
    1X^2 + 2X + 1
    ::::::::::::::::::::::::NO REAL ROOTS::::::::::::::::::::::::
    [ 2, -0.3819660112501051, -2.618033988749895 ]
    1X^2 + 3X + 1
