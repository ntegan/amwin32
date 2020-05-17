# automake win32
using automake and mingw to cross compile for win32

## Dependencies
* GNU autotools
* `apt install mingw-w64` to get the mingw cross compiler on ubuntu

## Building
```
autoreconf -i
./cconfigure # yes, two 'c's
make
```
