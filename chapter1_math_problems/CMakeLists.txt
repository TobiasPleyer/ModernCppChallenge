project(Chapter-1)

set(LIB_NAME chapter1)
set(LIB_SOURCES
      common
      p1.cpp
      p2.cpp
      p3.cpp
      p4.cpp
      p5.cpp
      p6.cpp
      p7.cpp
      p8.cpp
      p9.cpp
   )

add_library(${LIB_NAME} STATIC ${LIB_SOURCES})

add_dependencies(${LIB_NAME} range-v3)
