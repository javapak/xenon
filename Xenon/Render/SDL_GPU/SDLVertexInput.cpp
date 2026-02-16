/***************************************************************/
/* Copyright 2025 Xenon Emulator Project. All rights reserved. */
/***************************************************************/

#include "SDLVertexInput.h"

#ifndef NO_GFX
void Render::SDLVertexInput::SetBindings(const std::vector<VertexBinding> &bindings) {
  LOG_INFO(Render, "SDLVertexInput::SetBindings: {}", bindings.size());
}

void Render::SDLVertexInput::SetAttributes(const std::vector<VertexAttribute> &attributes) {
  LOG_INFO(Render, "SDLVertexInput::SetAttributes: {}", attributes.size());
}

void Render::SDLVertexInput::BindVertexBuffer(u32 binding, std::shared_ptr<Buffer> buffer) {
  LOG_INFO(Render, "SDLVertexInput::BindVertexBuffer: {}", binding);
}

void Render::SDLVertexInput::SetIndexBuffer(std::shared_ptr<Buffer> buffer) {
  LOG_INFO(Render, "SDLVertexInput::SetIndexBuffer");
}

void Render::SDLVertexInput::Bind() {
  LOG_INFO(Render, "SDLVertexInput::Bind");
}

void Render::SDLVertexInput::Unbind() {
  LOG_INFO(Render, "SDLVertexInput::Unbind");
}
#endif