include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(test_fact test_factorial.cpp)
target_link_libraries(test_fact MyProject)
add_test(NAME FactTest COMMAND test_fact)

add_executable(test_fib test_fibonacci.cpp)
target_link_libraries(test_fib MyProject)
add_test(NAME FibTest COMMAND test_fib)

add_executable(test_pal test_palindrome.cpp)
target_link_libraries(test_pal MyProject)
add_test(NAME PalTest COMMAND test_pal)

add_executable(test_pri test_prime.cpp)
target_link_libraries(test_pri MyProject)
add_test(NAME PrimeTest COMMAND test_pri)
