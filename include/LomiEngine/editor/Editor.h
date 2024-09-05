//
// Created by HSC on 2024-09-05.
//

#ifndef EDITOR_H
#define EDITOR_H

#include <memory>
#include "../Renderer.h"  // 상대 경로로 Renderer 포함

namespace LomiEngine {

    class Renderer;  // 전방 선언

    class Editor {
    public:
        Editor();
        void run();

    private:
        bool shouldClose();
        std::unique_ptr<Renderer> renderer;
    };

}

#endif //EDITOR_H
