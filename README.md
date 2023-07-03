## windows平台+vs2015 





## 使用vcpkg + cmake 管理C++库依赖

* 增加了vcpkg作为工程的submodule
* 下载项目后，需要git submodule init && git submodule sync && git submodule update 更新vcpkg

* 安装或者叫做下载vcpkg.exe: 执行 .\vcpkg\bootstrap-vcpkg.bat
* 安装 Eigen3:
  * .\vcpkg\vcpkg.exe install eigen3  这个就会自动下载源码构建第三方库了，后续cmake直接声明依赖就好
  * Cmake 增改:
    * find_package(Eigen3 CONFIG REQUIRED)
    * target_link_libraries(Transformation PRIVATE Eigen3::Eigen)
    * target_include_directories(Transformation PRIVATE ${EIGEN3_INCLUDE_DIR} )

* 其他：

  * 需要在CMakeLists.txt最开始 增加

    SET(CMAKE_TOOLCHAIN_FILE "../vcpkg/scripts/buildsystems/vcpkg.cmake")

    参考 https://github.com/microsoft/vcpkg#vcpkg-with-visual-studio-cmake-projects