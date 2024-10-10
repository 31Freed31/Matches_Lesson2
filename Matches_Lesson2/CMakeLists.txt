# CMakeList.txt: проект CMake для Matches_Lesson2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Matches_Lesson2 "Matches_Lesson2.cpp"  "Game.h" "Player.h" "Game.cpp" "Player.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Matches_Lesson2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
