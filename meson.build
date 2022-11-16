project('sample', 'c',
  # We need to set these options for libui, as Meson would otherwise
  # override these. Setting these in dependency() as advertised in the
  # documentation does NOT work.
  default_options: ['b_pch=false',  'c_std=c99', 'cpp_std=c++11'])

libui_dep = dependency('libui', fallback : ['libui', 'libui_dep'])

sample_sources = []
if host_machine.system() == 'windows'
  windows = import('windows')
  sample_sources += [
    windows.compile_resources('win32/app.rc',
    depend_files: ['win32/app.manifest']),
  ]
endif

executable('sample',
  'main.c',
  sample_sources,
  dependencies : libui_dep,
  install : true)
