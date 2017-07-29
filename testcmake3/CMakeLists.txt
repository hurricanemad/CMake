cmake_minimum_required(VERSION 2.6)
project(testcmake3)

add_subdirectory(src bin)

install(FILES COPYRIGHT REAME DESTINATION share/doc/testcmake3)
install(DIRECTORY doc/ DESTINATION share/doc/testcmake3)
install(PROGRAMS testcmake3.sh DESTINATION bin)
