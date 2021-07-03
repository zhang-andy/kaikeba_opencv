# cmake 的最低版本要求
cmake_minimum_required(VERSION 3.1)
# 设置项⽬的名称
project(demo)
# 寻找OpenCV的必须组件
find_package(OpenCV REQUIRED)
# 添加可执⾏⽂件前者为⽬标⽂件名称 后者为源⽂件名称
add_executable(demo main.cpp)
# 链接库
target_link_libraries(demo ${OpenCV_LIBS})
