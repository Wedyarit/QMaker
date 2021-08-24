cmake_minimum_required(VERSION 3.19)
project(QMaker)

set(QT_VERSION 5)
set(REQUIRED_LIBS Core Gui Widgets Svg)
set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Svg)

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

list(APPEND CMAKE_PREFIX_PATH "/home/wedyarit/Qt/6.1.2/gcc_64/")

if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

add_executable(${PROJECT_NAME} main.cpp widgets/headers/qmaker.h widgets/sources/qmaker.cpp widgets/headers/QuestionListContainer.h widgets/sources/QuestionListContainer.cpp widgets/sources/QuestionContainer.cpp widgets/headers/QuestionContainer.h widgets/sources/QuestionTypeContainer.cpp widgets/headers/QuestionTypeContainer.h widgets/headers/QuestionList.h widgets/sources/QuestionList.cpp application.qrc widgets/headers/QuestionItem.h widgets/sources/QuestionItem.cpp)

target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})
