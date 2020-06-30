add_library(MathFunctions mysqrt.cpp)

# state that anyone linking to us needs to include the current src dir
# to find MathFunctions.h 
target_include_directories(MathFunctions
			INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
			)
