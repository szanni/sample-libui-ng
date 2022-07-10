project('sample', 'c',
  # We need to set these options for libui, as Meson would otherwise
  # override these. Setting these in dependency() as advertised in the
  # documentation does NOT work.
  default_options: ['b_pch=false',  'c_std=c99', 'cpp_std=c++11'])

libui_dep = dependency('libui', fallback : ['libui', 'libui_dep'])

executable('sample',
  'main.c',
  dependencies : libui_dep,
  install : true)
