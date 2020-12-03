inc_dir = []
gtk2_deps = []
gtk3_deps = []
gtk4_deps = []

gtk2_deps += dependency ('gtk+-2.0')

gtk3_deps += dependency ('gtk+-3.0')

#gtk4_deps += dependency ('gtk+-4.0')

command = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'gtk2_*.c')
gtk2 = command.stdout().strip().split('\n')

command = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'gtk3_*.c')
gtk3 = command.stdout().strip().split('\n')

command = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'gtk4_*.c')
gtk4 = command.stdout().strip().split('\n')

foreach h : gtk2
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  executable('gtk2-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : gtk2_deps)
endforeach

foreach h : gtk3 
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  executable('gtk3-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : gtk3_deps)
endforeach

#foreach h : gtk4 
#  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
#  executable('gtk4-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : gtk4_deps)
#endforeach

