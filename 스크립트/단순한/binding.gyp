{
    "targets": [
        {
            "target_name" : "단순한",
            "sources":["단순한.cc"],
            "include_dirs" : [
    "<!(node -e \"require('nan')\")"
]
        }
    ]
}

# node-gyp configure build
# const addon = require('./build/Release/addon');