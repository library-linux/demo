inc_dir = []
glib_deps = []

glib_deps += dependency ('glib-2.0')
glib_deps += dependency ('gtk+-2.0')

command = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), '*.c')
glib = command.stdout().strip().split('\n')

foreach h : glib
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  executable('glib-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : glib_deps)
endforeach
