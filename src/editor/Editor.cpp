//
// Created by HSC on 2024-09-05.
//

#include "LomiEngine/editor/Editor.h"
#include "LomiEngine/Renderer.h"  // 상대 경로로 Renderer 포함

#include <iostream>

namespace LomiEngine {

    Editor::Editor() {
        // 생성자에서 초기화
        renderer = std::make_unique<Renderer>();
    }

    void Editor::run() {
        // 에디터의 메인 루프
        renderer->init();

        // 기본 렌더 루프
        while (!shouldClose()) {
            renderer->init();
            // 에디터 업데이트 코드
        }

        renderer->cleanup();
    }

    bool Editor::shouldClose() {
        // 종료 조건 설정
        return false; // 예시로 false 반환
    }

}
