cmake_minimum_required(VERSION 3.16)

project(GroupedProperties VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(main/)

include(GNUInstallDirs)
install(TARGETS appGroupedProperties
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
