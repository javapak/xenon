/***************************************************************/
/* Copyright 2025 Xenon Emulator Project. All rights reserved. */
/***************************************************************/

#include "SDLTexture.h"

#ifndef NO_GFX
void Render::SDLTexture::CreateTextureHandle(u32 width, u32 height, s32 flags) {
  LOG_INFO(Render, "SDLTexture::CreateTextureHandle: {}, {}, {}", width, height, flags);
}

void Render::SDLTexture::CreateTextureWithData(u32 width, u32 height, eDataFormat format, u8* data, u32 dataSize, s32 flags) {
  LOG_INFO(Render, "SDLTexture::CreateTextureWithData: {}, {}, {}, {}, {}", width, height, static_cast<u8>(format), dataSize, flags);
}

void Render::SDLTexture::ResizeTexture(u32 width, u32 height) {
  LOG_INFO(Render, "SDLTexture::ResizeTexture: {}, {}", width, height);
}

void Render::SDLTexture::GenerateMipmaps() {
  LOG_INFO(Render, "SDLTexture::GenerateMipmaps");
}

void Render::SDLTexture::UpdateSubRegion(u32 x, u32 y, u32 w, u32 h, eDataFormat format, u8 *data) {
  LOG_INFO(Render, "SDLTexture::UpdateSubRegion: {}, {}, {}, {}, {}", x, y, w, h, static_cast<u8>(format));
}

void Render::SDLTexture::Bind() {
  LOG_INFO(Render, "SDLTexture::Bind");
}

void Render::SDLTexture::Unbind() {
  LOG_INFO(Render, "SDLTexture::Unbind");
}

void Render::SDLTexture::DestroyTexture() {
  LOG_INFO(Render, "SDLTexture::DestroyTexture");
}
#endif
