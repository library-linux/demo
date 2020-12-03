inc_dir = []
gsetting_deps = []

gsetting_deps += dependency ('gio-2.0')
gsetting_deps += dependency ('glib-2.0')
gsetting_deps += dependency ('gobject-2.0')

command = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), '*.c')
gsetting = command.stdout().strip().split('\n')

foreach h : gsetting
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  executable('gsetting-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : gsetting_deps)
endforeach
