{
  "targets": [
    {
      "target_name": "lucy",
      "sources": [ 
        "src/Document/hit_doc.cc",
        "src/Search/hits.cc",
        "src/Analysis/analyzer.cc",
        "src/Analysis/easy_analyzer.cc",
        "src/Plan/schema.cc",
        "src/Search/index_searcher.cc",
        "src/Plan/field_type.cc",
        "src/Plan/full_text_type.cc",
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