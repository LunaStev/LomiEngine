# LomiEngine 라이브러리 생성
add_library(LomiEngine STATIC
    Engine.cpp
    Renderer.cpp
    Physics.cpp
    main.cpp
    editor/Editor.cpp
)

add_subdirectory(editor)

# 헤더 파일 경로 설정
target_include_directories(LomiEngine PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${Vulkan_INCLUDE_DIRS}  # Vulkan 헤더 파일 경로
)

target_link_libraries(LomiEngine PUBLIC
        ${Vulkan_LIBRARIES}  # Vulkan 라이브러리
)

# SimpleEditor 실행 파일 생성
add_executable(LomiEngineApp
        main.cpp
)

# C++ 표준 설정 (모듈별 설정, 선택사항)
set_target_properties(LomiEngine PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
)