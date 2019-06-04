# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté hello
project(demo)

# # Crée des variables avec les fichiers à compiler
# set(SRCS
#   main.c
#   hello.c
#     )
    
# set(HEADERS
#     hello.h
#     )

# set(SRCS_T
#   test.c
#   hello.c
#     )

add_subdirectory(lib)
include_directories(lib)
add_subdirectory(bin)

