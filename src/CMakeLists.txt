project (SAMPLE-RUN)

# AUTOGEN FIND COMMANDS GENERATED BY goldpkg
# AUTOGEN FIND PLEASE DO NOT MODIFY
find_path(BOOST_ARRAY_INCLUDE_DIRS "boost/array.hpp")
# AUTOGEN FIND LIBRARY WILL LOOK FOR PACKAGES HERE ONLY
# AUTOGEN FIND ENDS HERE

add_executable(${PROJECT_NAME} main.cpp)


target_link_libraries(${PROJECT_NAME}
PRIVATE
libs::SAMPLE-LIB
)

# AUTOGEN TARGET GENERATED BY goldpkg
# AUTOGEN TARGET PLEASE DO NOT MODIFY
target_include_directories(${PROJECT_NAME} PRIVATE ${BOOST_ARRAY_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE libs::SAMPLE-LIB)
# AUTOGEN TARGET LIBRARY WILL LOOK FOR PACKAGES HERE ONLY
# AUTOGEN TARGET ENDS HERE
