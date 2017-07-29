add_executable(testcmake main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_NAME ${PROJECT_BINARY_DIR}/lib)
install(TARGETS testcmake RUNTIME DESTINATION bin)
