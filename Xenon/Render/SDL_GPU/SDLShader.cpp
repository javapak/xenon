/***************************************************************/
/* Copyright 2025 Xenon Emulator Project. All rights reserved. */
/***************************************************************/

#include "SDLShader.h"

#ifndef NO_GFX
void Render::SDLShader::CompileFromSource(eShaderType type, const char *source) {
  LOG_INFO(Render, "SDLShader::CompileFromSource: {}", static_cast<u8>(type));
}

void Render::SDLShader::CompileFromBinary(eShaderType type, const u8 *data, u64 size) {
  LOG_INFO(Render, "SDLShader::CompileFromBinary: {}", static_cast<u8>(type));
}

s32 Render::SDLShader::GetUniformLocation(const std::string &name) {
  LOG_INFO(Render, "SDLShader::GetUniformLocation: {}", name);
  return 0;
}

void Render::SDLShader::SetUniformInt(const std::string &name, s32 value) {
  LOG_INFO(Render, "SDLShader::SetUniformInt: {}, {}", name, value);
}

void Render::SDLShader::SetUniformFloat(const std::string &name, f32 value) {
  LOG_INFO(Render, "SDLShader::SetUniformFloat: {}, {}", name, value);
}

void Render::SDLShader::SetVertexShaderConsts(u32 baseVector, u32 count, const f32 *data) {
  LOG_INFO(Render, "SDLShader::SetVertexShaderConsts: {}, {}", baseVector, count);
}

void Render::SDLShader::SetPixelShaderConsts(u32 baseVector, u32 count, const f32 *data) {
  LOG_INFO(Render, "SDLShader::SetPixelShaderConsts: {}, {}", baseVector, count);
}

void Render::SDLShader::SetBooleanConstants(const u32 *data) {
  LOG_INFO(Render, "SDLShader::SetBooleanConstants");
}

bool Render::SDLShader::Link() {
  LOG_INFO(Render, "SDLShader::Link");
  return true;
}

void Render::SDLShader::Bind() {
  LOG_INFO(Render, "SDLShader::Bind");
}

void Render::SDLShader::Unbind() {
  LOG_INFO(Render, "SDLShader::Unbind");
}

void Render::SDLShader::Destroy() {
  LOG_INFO(Render, "SDLShader::Destroy");
}
#endif
