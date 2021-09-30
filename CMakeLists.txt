cmake_minimum_required(VERSION 3.19)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C main.c out.c mStruct.c mUnion.c mDomain.c mFileRW.c pointer.c test.c)