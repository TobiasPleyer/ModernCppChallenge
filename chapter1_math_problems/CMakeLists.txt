project(Chapter-1)

set(LIB_NAME chapter1)
set(LIB_SOURCES
      p1.cpp
      p2.cpp
      p3.cpp
      p4.cpp
   )

add_library(${LIB_NAME} STATIC ${LIB_SOURCES})

add_dependencies(${LIB_NAME} range-v3)
#install(TARGETS ${LIB_NAME}
#        ARCHIVE
#        DESTINATION bin)
