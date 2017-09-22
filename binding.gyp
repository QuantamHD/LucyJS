{
  "targets": [
    {
      "target_name": "lucy",
      "sources": [ "src/lucy.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "external/includes"
      ],
      "conditions": [
        ['OS == "mac"', {
          "libraries": [
            "-L<!(pwd)/external/libs/osx",
            "-llucy",
            "-lclownfish",
          ]
        }],
        ['OS in "linux freebsd openbsd solaris android"',{
          "libraries": [
            "-L<!(pwd)/external/libs/linux",
            "-llucy",
            "-lclownfish",
          ]
        }]
        
      ]
    }
  ]
}