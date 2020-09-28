add_library(MathFunctions 
  mysqrt.cpp 
  mysqrt.h
  myfib.cpp
  myfib.h)

target_include_directories(MathFunctions INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS MathFunctions DESTINATION lib)
install(FILES mysqrt.h DESTINATION include)
install(FILES myfib.h DESTINATION include)