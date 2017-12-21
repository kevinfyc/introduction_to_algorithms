SET(LIB_SRC
   test.h
   test.cpp
   insert_sort.hpp
   )
ADD_LIBRARY(ita ${LIB_SRC})
SET_TARGET_PROPERTIES(ita PROPERTIES OUTPUT_NAME "ita")
