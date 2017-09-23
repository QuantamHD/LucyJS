{
  "targets": [
    {
      "target_name": "lucy",
      "sources": [ "src/lucy.cc" ],
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
            "C:\\Users\\Yech\\Documents\\LucyJS\\external\\includes\\windows"
          ],
          'library_dirs' : [
            "C:\\Users\\Yech\\Documents\\LucyJS\\external\\libs\\windows"
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