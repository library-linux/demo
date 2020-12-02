inc_dir = []
gio_deps = []

gio_deps += dependency ('gtk+-2.0')

gio_deps += cc.find_library ('pthread')

command = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), '*.c')
gio = command.stdout().strip().split('\n')

foreach h : gio
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  executable('demo-' + name.stdout().strip(), h, include_directories : inc_dir, dependencies : gio_deps)
endforeach
