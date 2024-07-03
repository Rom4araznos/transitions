include(${PROJECT_SOURCE_DIR}/cmake/CPM.cmake)

CPMAddPackage("gh:doctest/doctest#v2.4.11")

add_executable(transitions_tests main.cpp)

target_link_libraries(transitions_tests PUBLIC transitions doctest)

