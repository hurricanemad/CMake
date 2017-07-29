add_executable(testcmake2 main.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

install(TARGETS testcmake2 RUNTIME DESTINATION install)
