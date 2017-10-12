{
  "targets": [
    {
      "target_name": "lucy",
      "sources": [ 
        "src/hit_doc.cc",
        "src/hits.cc",
        "src/analyzer.cc",
        "src/easy_analyzer.cc",
        "src/schema.cc",
        "src/index_searcher.cc",
        "src/field_type.cc",
        "src/full_text_type.cc",
        "src/lucy.cc"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ],
      "conditions": [
        ['OS == "mac"', {
          'include_dirs': [
            "external/includes/unix"
          ],
          "libraries": [
            "-L<!(pwd)/external/libs/osx",
            "-llucy",
            "-lclownfish"
          ]
        }],
        ['OS in "linux freebsd openbsd solaris android"',{
          'include_dirs': [
            "external/includes/unix"
          ],
          "libraries": [
            "-L<!(pwd)/external/libs/linux",
            "-llucy",
            "-lclownfish"
          ]
        }],
        ['OS=="win"', {
          'include_dirs' : [
            "<!(cd)\\external\\includes\\windows"
          ],
          'library_dirs' : [
            "<!(cd)\\external\\libs\\windows"
          ],
          'defines' : [
            'VC_EXTRALEAN',
          ],
          'msvs_settings' : {
            'VCCLCompilerTool' : {
            },
            'VCLinkerTool' : {
              'AdditionalOptions' : ['/OPT:REF','/OPT:ICF','/LTCG']
            },
          },
          'libraries': ['lucy-0.6.lib', 'clownfish-0.6.lib'],
        }],
      ]
    }
  ]
}