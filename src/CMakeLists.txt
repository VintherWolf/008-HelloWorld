#add_executable(helloworld_exec main.cxx helloworld.cxx)
add_subdirectory(helloworld)
include_directories(../include)
set(FILES main.cxx $(HELLOWORLDFUNC))
add_library(libmain OBJECT ${FILES})

#target_link_libraries(helloworld_exec LINK_PUBLIC Hello)
#set(SRCS ${SRCS} main.cxx PARENT_SCOPE)
