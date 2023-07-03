cmake_minimum_required (VERSION 3.10)

SET(CMAKE_TOOLCHAIN_FILE "../vcpkg/scripts/buildsystems/vcpkg.cmake")

project (Transformation)

find_package(Eigen3 CONFIG REQUIRED)
#find_package(Eigen3 REQUIRED)

message ( STATUS "EIGEN3_INCLUDE_DIR    = ${EIGEN3_INCLUDE_DIR}" )

add_executable (Transformation main.cpp)
target_link_libraries(Transformation PRIVATE Eigen3::Eigen)
target_include_directories(Transformation PRIVATE ${EIGEN3_INCLUDE_DIR} )