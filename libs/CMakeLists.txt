project(SAMPLE-LIB)

# AUTOGEN FIND COMMANDS GENERATED BY goldpkg
# AUTOGEN FIND PLEASE DO NOT MODIFY
find_path(BOOST_ARRAY_INCLUDE_DIRS "boost/array.hpp")
# AUTOGEN FIND LIBRARY WILL LOOK FOR PACKAGES HERE ONLY
# AUTOGEN FIND ENDS HERE

add_library(${PROJECT_NAME} STATIC
lib.cxx
"tests/test.cxx")

add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
# A PUBLIC Header can be accessed outside
PUBLIC
$<INSTALL_INTERFACE:include>
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
# A Private Header File cannot be accessed by
# Any packages that uses it
PRIVATE
${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_features(${PROJECT_NAME}
PRIVATE
cxx_std_11
)


add_subdirectory(tests)

# AUTOGEN TARGET GENERATED BY goldpkg
# AUTOGEN TARGET PLEASE DO NOT MODIFY
target_include_directories(${PROJECT_NAME} PRIVATE ${BOOST_ARRAY_INCLUDE_DIRS})
# AUTOGEN TARGET LIBRARY WILL LOOK FOR PACKAGES HERE ONLY
# AUTOGEN TARGET ENDS HERE
