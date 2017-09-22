{
  "targets": [
    {
      "target_name": "lucy",
      "sources": [ "src/lucy.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "external/includes"
      ],
      "link_settings": {
        "libraries": [
          "-L<!(pwd)/external/libs",
          "-llucy",
          "-lclownfish",
        ]
      }
    }
  ]
}