cmake_minimum_required(VERSION 3.10)

project(Pile_liste_vecteur)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Pile_liste_vecteur main.cpp Pile.cpp Pile.h TestPPile.cpp TestPPile.h PileVector.cpp PileVector.h)


