# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# # Notre projet est étiqueté hello
# project(hello_l)

add_executable(demo demo.cpp)

target_link_libraries(demo student)
