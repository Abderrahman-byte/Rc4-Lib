set (SOURCES
    ../include/rc4lib/rc4.hpp
    ./rc4.cpp
)

set (PUBLIC_INCLUDE_DIRS
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
  $<INSTALL_INTERFACE:include>
)

add_library (rc4-lib STATIC)

target_sources (rc4-lib PRIVATE ${SOURCES})

target_include_directories (rc4-lib PUBLIC ${PUBLIC_INCLUDE_DIRS})

add_library (rc4-lib::rc4 ALIAS rc4-lib)