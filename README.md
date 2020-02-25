# cpp_cmake_git_example

> 参考：https://github.com/ttroy50/cmake-examples/

## 基础

* `CMakeLists.txt`是CMake默认的保存CMake指令的地方，类似于`Makefile`。
* 一般在开头使用`cmake_minimum_required(VERSION 3.5)`指定最少需求的CMake版本。
* 使用`project(name)`为项目定名，相应值将保存在`${PROJECT_NAME}`变量中。
* 使用`add_executable(main main.cpp)`添加可执行文件，第一个参数是可执行文件名第二个参数是对应的源文件。
* 两种编译方式：
  * In-Place：直接运行`cmake`，所有中间文件都会在当前目录生成。
  * Out-of-Place：**推荐**新建`build/`文件夹，并在该文件夹内运行`cmake ..`。

## 分离`src/`和`include/`

* CMake相关变量
  * `PROJECT_SOURCE_DIR`：当前CMake工程的总目录，是`CMakeLists.txt`所在目录。
  * `CMAKE_BINARY_DIR`：生成的Binary所在的目录，是`cmake`命令运行的目录。
  * `PROJECT_BINARY_DIR`：
