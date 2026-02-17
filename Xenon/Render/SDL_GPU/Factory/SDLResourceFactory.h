/***************************************************************/
/* Copyright 2025 Xenon Emulator Project. All rights reserved. */
/***************************************************************/

#pragma once

#include "Render/Abstractions/Factory/ResourceFactory.h"
#include "Render/SDL_GPU/Factory/SDLShaderFactory.h"
#include "Render/SDL_GPU/SDLBuffer.h"
#include "Render/SDL_GPU/SDLTexture.h"
#include "Render/GUI/SDL.h"

#include "Base/Logging/Log.h"

#ifndef NO_GFX
namespace Render {

class SDLResourceFactory : public ResourceFactory {
public:
  std::unique_ptr<ShaderFactory> CreateShaderFactory() override {
    LOG_INFO(Render, "SDLResourceFactory::CreateShaderFactory");
    return std::make_unique<SDLShaderFactory>();
  }
  std::unique_ptr<Buffer> CreateBuffer() override {
    LOG_INFO(Render, "SDLResourceFactory::CreateBuffer");
    return std::make_unique<SDLBuffer>();
  }
  std::unique_ptr<Texture> CreateTexture() override {
    LOG_INFO(Render, "SDLResourceFactory::CreateTexture");
    return std::make_unique<SDLTexture>();
  }
  std::unique_ptr<GUI> CreateGUI() override {
    LOG_INFO(Render, "SDLResourceFactory::CreateGUI");
    return std::make_unique<SDLGUI>();
  }
};

} // namespace Render
#endif
