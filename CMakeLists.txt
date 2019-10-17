cmake_minimum_required(VERSION 3.14)
project(starwars)

set(CMAKE_CXX_STANDARD 14)

add_executable(starwars main.cpp Humanoide.cpp Humanoide.h Princesse.cpp Princesse.h MembreEmpire.cpp MembreEmpire.h Rebel.cpp Rebel.h Barman.cpp Barman.h Alliance.cpp Alliance.h Yoda.cpp Yoda.h Hors_la_loi.h Traitre.cpp Traitre.h)