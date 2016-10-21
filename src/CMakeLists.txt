cmake_minimum_required(VERSION 3.3.2)
project(Retr0)

set(SOURCE_FILES
  main.cpp
  Game.cpp

  core/Engine.cpp
  core/SceneManager.cpp
  core/Scene.cpp

  games/snake/Entity.cpp
  games/snake/PowerupEntity.cpp
  games/snake/SnakeEntity.cpp
  games/snake/SnakeScene.cpp
)

set(Header_FILES
  Game.h

  core/Engine.h
  core/SceneManager.h
  core/Scene.h

  games/snake/Entity.h
  games/snake/PowerupEntity.h
  games/snake/SnakeEntity.h
  games/snake/SnakeScene.h

)

include_directories(".")

add_executable(Retr0 ${SOURCE_FILES})
target_link_libraries(Retr0 ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARY})

add_custom_command(TARGET Retr0 POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:Retr0>/assets)
