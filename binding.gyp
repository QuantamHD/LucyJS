{
  "targets": [
    {
      "target_name": "lucy",
      "sources": [ "src/lucy.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "../external/includes"
      ],
      "link_settings": {
        "libraries": [
          "-llucy",
          "-lclownfish",
        ],
        "ldflags": [
            "-L../external/libs"
        ]
      }
    }
  ]
}