#include "LomiEngine/Renderer.h"

#include <iostream>
#include <vulkan/vulkan.h>

namespace LomiEngine {
    Renderer::Renderer() {
        VkInstanceCreateInfo createInfo = {};
        createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        createInfo.pApplicationInfo = nullptr;

        VkInstance instance;
        VkResult result = vkCreateInstance(&createInfo, nullptr, &instance);
        if (result != VK_SUCCESS) {
            std::cerr << "Failed to create instance!" << std::endl;
            // 에러 처리
        }
    }

    Renderer::~Renderer() {
        // vulkan 자원 정리
    }

    void Renderer::init() {
        // 렌더링 코드
    }

    void Renderer::cleanup() {
        // cleanup
    }

}