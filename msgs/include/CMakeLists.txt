add_library(msgs INTERFACE)
target_include_directories(msgs INTERFACE .)
add_dependencies(msgs imsg)

