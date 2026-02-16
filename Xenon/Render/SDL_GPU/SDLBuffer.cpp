/***************************************************************/
/* Copyright 2025 Xenon Emulator Project. All rights reserved. */
/***************************************************************/

#include "SDLBuffer.h"

#ifndef NO_GFX
void Render::SDLBuffer::CreateBuffer(u64 size, const void *data, eBufferUsage usage, eBufferType type) {
  LOG_INFO(Render, "SDLBuffer::CreateBuffer: {}, {}, {}", size, static_cast<u8>(usage), static_cast<u8>(size));
}

void Render::SDLBuffer::UpdateBuffer(u64 offset, u64 size, const void *data) {
  LOG_INFO(Render, "SDLBuffer::UpdateBuffer: {}, {}", offset, size);
}

void Render::SDLBuffer::Bind(u32 binding) {
  LOG_INFO(Render, "SDLBuffer::Bind");
}

void Render::SDLBuffer::Unbind() {
  LOG_INFO(Render, "SDLBuffer::Unbind");
}

void Render::SDLBuffer::DestroyBuffer() {
  LOG_INFO(Render, "SDLBuffer::DestroyBuffer");
}

void *Render::SDLBuffer::GetBackendHandle()  {
  return reinterpret_cast<void *>(&SDLHandle);
}
#endif
