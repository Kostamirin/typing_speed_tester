cmake_minimum_required(VERSION 4.0)
project(typing_speed_tester)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(typing_speed_tester main.cpp
        text_creating/text.h
        text_creating/text.cpp
        text_creating/text.h
        interface/interface.cpp
        interface/interface.h
        interface/interface.ui
        main.h
        main.h)
target_link_libraries(typing_speed_tester
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

