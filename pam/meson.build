inc_dir = []
pam_deps = []

pam_deps += meson.get_compiler('c').find_library ('pam')
pam_deps += meson.get_compiler('c').find_library ('pam_misc')
pam_deps += meson.get_compiler('c').find_library ('pwquality')

command1 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'pam_test*.c')
pam_test = command1.stdout().strip().split('\n')

command2 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'pam_module_*.c')
pam_module = command2.stdout().strip().split('\n')


foreach h : pam_test
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  executable('pam-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : pam_deps)
endforeach

foreach h : pam_module
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h, 'so')
  library('pam-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : pam_deps)
endforeach

