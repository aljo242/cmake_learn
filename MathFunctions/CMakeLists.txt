add_executable(MakeTable MakeTable.cpp)

target_compile_features(MakeTable PRIVATE cxx_constexpr)


add_custom_command(
	OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/Table.h
	COMMAND MakeTable ${CMAKE_CURRENT_BINARY_DIR}/Table.h
	DEPENDS MakeTable
	)

add_library(MathFunctions mysqrt.cpp ${CMAKE_CURRENT_BINARY_DIR}/Table.h)

target_compile_features(MathFunctions PRIVATE cxx_constexpr)


# state that anyone linking to us needs to include the current src dir
# to find MathFunctions.h 
target_include_directories(MathFunctions 
			INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
			PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
			)


# install rules
install(TARGETS MathFunctions DESTINATION lib)
install(FILES MathFunctions.h DESTINATION include)

