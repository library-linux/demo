inc_dir = []
cairo_deps = []

cairo_deps += dependency ('xcb')
cairo_deps += dependency ('x11')
cairo_deps += dependency ('cairo')
cairo_deps += dependency ('gtk+-2.0')

command = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), '*.c')
cairo = command.stdout().strip().split('\n')

foreach h : cairo
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  executable('cairo-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : cairo_deps)
endforeach
