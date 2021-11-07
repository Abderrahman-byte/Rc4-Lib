# Rc4 Lib

rc4-lib is a simple implementation of the Rivest Cipher 4 algorithm.

## Using the library :

This library uses cmake as its buildsystem.

- install the library :

```shell
git submodule add https://github.com/Abderrahman-byte/Rc4-Lib
```

- link library into your project :

```cmake
# in your CMakeLists.txt

add_subdirectory (Rc4-Lib)

target_link_libraries(
    your_target
    rc4-lib::rc4
)
```