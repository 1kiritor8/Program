cmake_minimum_required(VERSION 4.0)
project(Computer_room_reservation_system)

set(CMAKE_CXX_STANDARD 20)

add_executable(Computer_room_reservation_system main.cpp
        Identity.h
        student.cpp
        student.h
        teacher.cpp
        teacher.h
        manager.cpp
        manager.h
        globalFile.h
        computerRoom.h
        orderFile.cpp
        orderFile.h)
