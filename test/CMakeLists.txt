cmake_minimum_required(VERSION 3.0)

set(SRCS1
    test1.cpp
    )

set(SRCS2
    test2.cpp
    )


add_executable(test1 ${SRCS1})
add_executable(test2 ${SRCS2})

target_link_libraries(test1 student)
target_link_libraries(test2 student)

add_test(test1 test1)
add_test(test2 test2)
