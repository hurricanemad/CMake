set(TEST_CMAKE_LIB_OUTPUT testcmakelib.cpp)


add_library(cmakelib SHARED ${TEST_CMAKE_LIB_OUTPUT})
add_library(cmakelib_static STATIC ${TEST_CMAKE_LIB_OUTPUT})

set_target_properties(cmakelib_static PROPERTIES OUTPUT_NAME "cmakelib")

#set_target_properties(cmakelib_static PROPERTIES VERSION 1.1 SOVERSION 1)

set_target_properties(cmakelib PROPERTIES CLEAN_DIRECT_OUTPUT 1)

set_target_properties(cmakelib_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)




install(TARGETS  cmakelib cmakelib_static 
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
        
install(FILES testcmakelib.h DESTINATION include)

        

