# src/CMakeLists.txt

# Add source files for the library
add_library(MyProject STATIC
    factorial.cpp
    fibonacci.cpp
    palindrome.cpp
    prime.cpp
    example_classe.cpp  # Make sure to include this if it exists
)
