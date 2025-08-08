find_package(Qt6 REQUIRED COMPONENTS Quick QuickControls2)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appGroupedProperties
    src/main.cpp
)

qt_add_qml_module(appGroupedProperties
    URI GroupedProperties
    VERSION 1.0
    QML_FILES
        ./qml/Main.qml
    SOURCES src/player.cpp inc/player.hpp
    SOURCES src/defender.cpp inc/defender.hpp
    SOURCES src/footballteam.cpp inc/footballteam.hpp
    SOURCES src/stricker.cpp inc/stricker.hpp
    SOURCES inc/playerdetails.hpp src/playerdetails.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appGroupedProperties PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appGroupedProperties
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_include_directories(appGroupedProperties PUBLIC ./inc/)

target_link_libraries(appGroupedProperties
    PRIVATE Qt6::Quick Qt6::QuickControls2
)
