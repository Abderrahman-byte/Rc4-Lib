enable_testing ()

add_executable (encryption_test encryption.cpp)

target_link_libraries(
    encryption_test
    gtest_main
    rc4-lib::rc4
)