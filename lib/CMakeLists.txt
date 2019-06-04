cmake_minimum_required(VERSION 3.0)

set(SRCS
    student.c
    )


add_library(student SHARED ${SRCS})
