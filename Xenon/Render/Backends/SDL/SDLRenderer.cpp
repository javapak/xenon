/***************************************************************/
/* Copyright 2025 Xenon Emulator Project. All rights reserved. */
/***************************************************************/

#include "Render/Backends/SDL/SDLRenderer.h"

#include "Render/SDL/Factory/SDLResourceFactory.h"

#ifndef NO_GFX
namespace Render {

void SDLRenderer::BackendStart() {
  LOG_INFO(Render, "SDLRenderer::BackendStart");
  resourceFactory = std::make_unique<SDLResourceFactory>();
  shaderFactory = resourceFactory->CreateShaderFactory();
  fs::path shaderPath{ Base::FS::GetUserPath(Base::FS::PathType::ShaderDir) };
  shaderPath /= "SDL";
  computeShaderProgram = shaderFactory->LoadFromFiles("XeFbConvert", {
    { eShaderType::Compute, shaderPath / "fb_deswizzle.comp" }
  });
  renderShaderPrograms = shaderFactory->LoadFromFiles("Render", {
    { eShaderType::Vertex, shaderPath / "framebuffer.vert" },
    { eShaderType::Fragment, shaderPath / "framebuffer.frag" }
  });
}

void SDLRenderer::BackendSDLProperties(SDL_PropertiesID properties) {
  LOG_INFO(Render, "SDLRenderer::BackendSDLProperties");
}

void SDLRenderer::BackendSDLInit() {
  LOG_INFO(Render, "SDLRenderer::BackendSDLInit");
  device = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_SPIRV, true, nullptr)
  if (!device) {
      LOG_ERROR(Render, "Failed to create SDL_GPU device: {}", SDL_GetError());
      return;
  }
  LOG_INFO(Render, "SDL GPU Device created successfully!")
  
}

void SDLRenderer::BackendShutdown() {
  LOG_INFO(Render, "SDLRenderer::BackendShutdown");
}

void SDLRenderer::BackendSDLShutdown() {
  LOG_INFO(Render, "SDLRenderer::BackendSDLShutdown");
}

void SDLRenderer::BackendResize(s32 x, s32 y) {
  LOG_INFO(Render, "SDLRenderer::BackendResize: {}, {}", x, y);
}

void SDLRenderer::UpdateScissor(s32 x, s32 y, u32 width, u32 height) {
  LOG_INFO(Render, "SDLRenderer::UpdateScissor: {}, {}, {}, {}", x, y, width, height);
}

void SDLRenderer::UpdateViewport(s32 x, s32 y, u32 width, u32 height) {
  LOG_INFO(Render, "SDLRenderer::UpdateViewport: {}, {}, {}, {}", x, y, width, height);
}

void SDLRenderer::UpdateClearColor(u8 r, u8 b, u8 g, u8 a) {
  LOG_INFO(Render, "SDLRenderer::UpdateClearColor: {}, {}, {}, {}", r, g, b, a);
}

void SDLRenderer::UpdateClearDepth(f64 depth) {
  LOG_INFO(Render, "SDLRenderer::UpdateClearDepth: {}", depth);
}

void SDLRenderer::Clear() {
  LOG_INFO(Render, "SDLRenderer::Clear");
}

void SDLRenderer::UpdateViewportFromState(const Xe::XGPU::XenosState *state) {
  LOG_INFO(Render, "SDLRenderer::UpdateViewportFromState");
}

void SDLRenderer::BackendBindPixelBuffer(Buffer *buffer) {
  LOG_INFO(Render, "SDLRenderer::BackendBindPixelBuffer");
}

void SDLRenderer::VertexFetch(const u32 location, const u32 components, bool isFloat, bool isNormalized, const u32 fetchOffset, const u32 fetchStride) {
  LOG_INFO(Render, "SDLRenderer::VertexFetch: loc:{}, comps:{}, float:{}, normalized:{}, offset:{}, stride:{}", location, components, isFloat ? "yes" : "no",
    isNormalized ? "yes" : "no", fetchOffset, fetchStride);
}

void SDLRenderer::Draw(Xe::XGPU::XeShader shader, Xe::XGPU::XeDrawParams params) {
  LOG_INFO(Render, "SDLRenderer::Draw");
}

void SDLRenderer::DrawIndexed(Xe::XGPU::XeShader shader, Xe::XGPU::XeDrawParams params, Xe::XGPU::XeIndexBufferInfo indexBufferInfo) {
  LOG_INFO(Render, "SDLRenderer::DrawIndexed: {}, {}, {}, {}, {}",
    indexBufferInfo.count,
    static_cast<u32>(indexBufferInfo.endianness),
    indexBufferInfo.guestBase,
    static_cast<u32>(indexBufferInfo.indexFormat),
    indexBufferInfo.length);
}

void SDLRenderer::OnCompute() {
  LOG_INFO(Render, "SDLRenderer::OnCompute");
}

void SDLRenderer::OnBind() {
  LOG_INFO(Render, "SDLRenderer::OnBind");
}

void SDLRenderer::OnSwap(SDL_Window *window) {
  LOG_INFO(Render, "SDLRenderer::OnSwap");
}

s32 SDLRenderer::GetBackbufferFlags() {
  LOG_INFO(Render, "SDLRenderer::GetBackbufferFlags");
  return 0;
}

s32 SDLRenderer::GetXenosFlags() {
  LOG_INFO(Render, "SDLRenderer::GetXenosFlags");
  return 0;
}

void* SDLRenderer::GetBackendContext() {
  LOG_INFO(Render, "SDLRenderer::GetBackendContext");
  return nullptr;
}

u32 SDLRenderer::GetBackendID() {
  LOG_INFO(Render, "SDLRenderer::GetBackendContext");
  return "SDL"_jLower;
}

} // namespace Render
#endif
