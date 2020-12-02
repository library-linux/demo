gdbus = []
inc_dir = []
gdbus_deps = []

gdbus_deps += dependency ('dbus-1')
gdbus_deps += dependency ('gtk+-2.0')
gdbus_deps += dependency ('dbus-glib-1')
gdbus_deps += dependency ('gio-unix-2.0')

gdbus_deps += cc.find_library ('pthread')

command1 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'gdbus_*.c')
gdbus += command1.stdout().strip().split('\n')
command2 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'data/*.c')
gdbus += command2.stdout().strip().split('\n')

foreach h : gio
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  executable('demo-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : gdbus_deps)
endforeach
