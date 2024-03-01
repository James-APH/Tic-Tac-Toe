# Adding catch 2:
find_package(Catch2 3.5.2 REQUIRED)

# These tests can use the Catch2-provided main
add_executable(tests test.cc)

# Linking tests executable with catch2 headers
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# Include directory:
target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)


# use file instead of subdir:
add_test(NAME my_tests COMMAND tests)
