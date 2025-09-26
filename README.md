# hello PHP Extension

A minimal PHP extension that provides a single function:

```php
<?php
hello_world();
```

Outputs:

```
Hello from PHP extension!
```

## Build Instructions

### Linux / macOS
```bash
phpize
./configure --enable-hello
make
sudo make install
echo "extension=hello" >> $(php -r "echo php_ini_loaded_file();")
php -r "hello_world();"
```

### Windows (GitHub Actions)
Add this job to `.github/workflows/build.yml`:

```yaml
jobs:
  build-windows:
    runs-on: windows-2022
    steps:
      - uses: actions/checkout@v4
      - name: Build extension
        uses: php/php-windows-builder/extension@v1
        with:
          extension-url: https://github.com/YOURNAME/hello-ext.git
          extension-ref: main
          php-version: '8.2'
          arch: x64
          ts: nts
          args: "--enable-hello"
```

Enable in php.ini:
```ini
extension=hello
```

Test:
```bash
php -r "hello_world();"
```
