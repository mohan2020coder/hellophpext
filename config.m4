PHP_ARG_ENABLE(hello, whether to enable hello support,
[  --enable-hello   Enable hello extension])

if test "$PHP_HELLO" != "no"; then
  PHP_NEW_EXTENSION(hello, hello.c, $ext_shared)
fi
