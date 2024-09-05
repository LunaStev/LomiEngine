# LomiEngineEditor 라이브러리 생성
add_library(LomiEngineEditor STATIC
        Editor.cpp
)

# LomiEngineEditor의 LomiEngine 라이브러리 링크
target_link_libraries(LomiEngineEditor PRIVATE
        LomiEngine
)

# 헤더 파일 경로 설정
target_include_directories(LomiEngineEditor PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)
