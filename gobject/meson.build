relay = []
inc_dir = []
gobject_deps = []

srcmod = import ('sourceset')

gobject_deps += dependency ('gobject-2.0')
gobject_deps += dependency ('gobject-introspection-1.0')

command = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), '*.c')
gobject = command.stdout().strip().split('\n')

command9 = run_command(meson.source_root() + '/command/find_source.sh', meson.current_source_dir(), '*/*.c')
relay += command9.stdout().strip().split('\n')

foreach h : gobject
  src = srcmod.source_set()
  name = run_command (meson.source_root() + '/command/get_file_name.sh', h)
  src.add (files(h))
  src.add (relay)
  executable('gobject-' + name.stdout().strip(), src.all_sources(), include_directories : inc_dir, dependencies : gobject_deps)
endforeach
