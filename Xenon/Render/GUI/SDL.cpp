/***************************************************************/
/* Copyright 2025 Xenon Emulator Project. All rights reserved. */
/***************************************************************/

#include "SDL.h"

#ifndef NO_GFX
#include "Core/XCPU/Interpreter/PPCInterpreter.h"
#include "Base/Config.h"
#include "Render/Abstractions/Renderer.h"
#include "Render/SDL_GPU/SDLTexture.h"

void Render::SDLGUI::InitBackend(void* context) {
    if (!ImGui_ImplSDL3_InitForSDLGPU(mainWindow)) {
        LOG_ERROR(System, "Failed to initialize ImGui SDL3 for SDL_GPU");
        return;
    }

    ImGui_ImplSDLGPU3_InitInfo initInfo = {};
    initInfo.Device = static_cast<SDL_GPUDevice*>(context);
    initInfo.ColorTargetFormat = SDL_GetGPUSwapchainTextureFormat(
        initInfo.Device, mainWindow
    );
    initInfo.MSAASamples = SDL_GPU_SAMPLECOUNT_1;

    if (!ImGui_ImplSDLGPU3_Init(&initInfo)) {
        LOG_ERROR(System, "Failed to initialize ImGui SDL_GPU backend");
    }
}
void Render::SDLGUI::ShutdownBackend() {
  ImGui_ImplSDL3_Shutdown();
}

void Render::SDLGUI::BeginSwap() {
  ImGui_ImplSDL3_NewFrame();
}

void Render::SDLGUI::EndSwap() {
  ImGuiIO& io = ImGui::GetIO();
  if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable) {
    SDL_Window* backupCurrentWindow = SDL_GL_GetCurrentWindow();
    SDL_GLContext backupCurrentContext = SDL_GL_GetCurrentContext();
    ImGui::UpdatePlatformWindows();
    ImGui::RenderPlatformWindowsDefault();
    SDL_GL_MakeCurrent(backupCurrentWindow, backupCurrentContext);
  }
  ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}
#endif
