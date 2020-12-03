project('demo', 'c', 'cpp', version : '0.0.0', meson_version : '>= 0.51.0',
    default_options : [
        'buildtype=debugoptimized',
        'warning_level=1',
        'c_std=gnu99'
    ]
)

cc = meson.get_compiler('c')
#cpp = meson.get_compiler('cpp')
pkg = import ('pkgconfig')

configinc = include_directories('.')

headersck = [
]

foreach h : headersck
    if cc.has_header (h)
          pass
    endif
endforeach


#subdir ('gio')
#subdir ('gtk')
subdir ('glib')
#subdir ('dbus')
#subdir ('cairo')
