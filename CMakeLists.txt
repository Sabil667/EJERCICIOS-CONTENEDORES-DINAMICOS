set(BOOST_ROOT "C:UsersUsuarioDesktopboost_1_83_0")
set(BOOST_INCLUDEDIR "${BOOST_ROOT}/include")
set(BOOST_LIBRARYDIR "${BOOST_ROOT}/lib")

set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "${BOOST_INCLUDEDIR}")
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "${BOOST_LIBRARYDIR}")

find_package(Boost REQUIRED)
if (NOT Boost_FOUND)
    message(FATAL_ERROR "Boost no encontrado. Asegúrate de que BOOST_ROOT esté configurado correctamente.")
endif()

target_include_directories(tu_target PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(tu_target PRIVATE ${Boost_LIBRARIES})
set(BOOST_ROOT "C:/ruta/a/boost")
set(BOOST_INCLUDEDIR "${BOOST_ROOT}/include")
set(BOOST_LIBRARYDIR "${BOOST_ROOT}/lib")

set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "${BOOST_INCLUDEDIR}")
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "${BOOST_LIBRARYDIR}")

find_package(Boost REQUIRED)
if (NOT Boost_FOUND)
    message(FATAL_ERROR "Boost no encontrado. Asegúrate de que BOOST_ROOT esté configurado correctamente.")
endif()

target_include_directories(tu_target PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(tu_target PRIVATE ${Boost_LIBRARIES})