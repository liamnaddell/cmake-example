cmake_minimum_required(VERSION 3.20)
project(makeex)

add_subdirectory(lib)
add_executable(Main)
target_sources(Main PRIVATE main.cpp)
target_include_directories(Main PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(Main Lib)

function (add_test_files)
    file(GLOB_RECURSE new_list test/*.cpp)
    foreach(file_path ${new_list})
	get_filename_component(dir_path ${file_path} NAME)
	message(STATUS "adding exe=${dir_path}, adding=${file_path} ")
	add_executable( ${dir_path} ${file_path} )
	target_include_directories(${dir_path} PUBLIC "${CMAKE_SOURCE_DIR}/include")
	target_include_directories(${dir_path} PUBLIC "${CMAKE_SOURCE_DIR}/test/include")
	target_link_libraries(${dir_path} Lib)
    endforeach()

endfunction ()

add_test_files()
