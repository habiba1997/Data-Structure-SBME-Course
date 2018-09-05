cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project( Habiba )

include_directories( include )
### Generate executables

add_executable( analyzeDNA apps/analyzeDNA.cpp )
add_executable( analyzeECG apps/analyzeECG.cpp )
add_executable( awesomeAPP apps/awesome_application.cpp )
add_executable( alculator apps/calculator.cpp )
add_executable( countWords apps/count_words.cpp)
add_executable( countDNA apps/countDNA.cpp)
add_executable( heron apps/heron.cpp )
add_executable( LL apps/linkedlist.cpp )
add_executable( pointers apps/Pointers.cpp )
add_executable( stackArray apps/StackImplemetationUsingArray.cpp )
add_executable( stockSpan apps/stock_span.cpp )
add_executable( test_dll apps/test_int_dlinkedlist.cpp )
add_executable( test_ll apps/test_int_linkedlist.cpp )
add_executable( test_qarray apps/test_int_q_array.cpp )
add_executable( test_qll apps/test_int_q_linkedlist.cpp )
add_executable( testTree apps/test_tree.cpp)
add_executable( testLLq apps/testllqueue.cpp)
add_executable( week1 apps/week1.cpp )
add_executable( week2 apps/week2.cpp )
add_executable( week4Lab apps/week4Lab.cpp )

