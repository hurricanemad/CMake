add_executable(testcmakelib2 main.cpp)

include_directories(../../testcmakelib/build/install/include/)

target_link_libraries(testcmakelib2 ../../testcmakelib/build/install/lib/libcmakelib.so)




install(TARGETS testcmakelib2 RUNTIME DESTINATION bin)
