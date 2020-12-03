gdbus = []
relay = []
inc_dir = []
gdbus_deps = []

srcmod = import ('sourceset')

gdbus_deps += dependency ('dbus-1')
gdbus_deps += dependency ('gtk+-2.0')
gdbus_deps += dependency ('dbus-glib-1')
gdbus_deps += dependency ('gio-unix-2.0')

gdbus_deps += cc.find_library ('pthread')

command1 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'gdbus_*.c')
gdbus += command1.stdout().strip().split('\n')
command2 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'dbus_name/*.c')
gdbus += command2.stdout().strip().split('\n')
command3 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'dbus_recv_send/*.c')
gdbus += command3.stdout().strip().split('\n')
command4 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'dbus_service/*.c')
gdbus += command4.stdout().strip().split('\n')

command9 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), 'data/*.c')
relay += command9.stdout().strip().split('\n')

foreach h : gdbus
  src = srcmod.source_set()
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  src.add (files(h))
  src.add (relay)
  executable('demo-' + name.stdout().strip(), src.all_sources(), include_directories : inc_dir, dependencies : gdbus_deps)
endforeach
