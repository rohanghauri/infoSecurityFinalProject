cmake_minimum_required(VERSION 3.10)
project(VulnerableProgram)

set(CMAKE_C_STANDARD 11)

add_executable(vulnerable_program testFile.c)

# Add any additional libraries or dependencies here

target_link_libraries(vulnerable_program)
