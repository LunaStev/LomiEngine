# LomiEngine 라이브러리 생성
add_library(LomiEngine STATIC
    Engine.cpp
    Renderer.cpp
    Physics.cpp
        ../include/LomiEngine/Engine.h
        ../include/LomiEngine/Renderer.h
        ../include/LomiEngine/Physics.h
)

# 헤더 파일 경로 설정
target_include_directories(LomiEngine PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

# C++ 표준 설정 (모듈별 설정, 선택사항)
set_target_properties(LomiEngine PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
)
