cmake_minimum_required(VERSION 3.14)
project(Devoir2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Devoir2
        Baton.cpp
        Baton.h
        Bracelet.cpp
        Bracelet.h
        Couronne.cpp
        Couronne.h
        Devoir2.cpp
        Epee.cpp
        Epee.h
        Fleche.cpp
        fleche.h
        Inventaire.cpp
        Inventaire.h Forgeron.cpp Forgeron.h)
