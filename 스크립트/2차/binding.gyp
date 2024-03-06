{
    "targets": [
        {
            "target_name" : "2차",
            "sources":["2차.cc"],
            "include_dirs" : [
    "<!(node -e \"require('nan')\")"
]
        }
    ]
}

# node-gyp configure build
# const addon = require('./build/Release/addon');