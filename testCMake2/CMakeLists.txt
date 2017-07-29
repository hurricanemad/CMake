cmake_minimum_required(VERSION 2.6)
project(testcmake2)

add_subdirectory(src bin)
add_subdirectory(doc)

install(FILES COPYRIGHT README DESTINATION share/doc/cmake/testcmake2)
install(PROGRAMS runtestcmake2.sh DESTINATION bin)

