/***************************************************************/
/* Copyright 2025 Xenon Emulator Project. All rights reserved. */
/***************************************************************/

#include "SDLShaderFactory.h"

#include "Render/SDL/SDLShader.h"

#ifndef NO_GFX
namespace Render {

void SDLShaderFactory::Destroy() {}

std::shared_ptr<Shader> SDLShaderFactory::CreateShader(const std::string &name) {
  LOG_INFO(Render, "SDLShaderFactory::CreateShader: {}", name);
  return std::make_unique<SDLShader>();
}

std::shared_ptr<Shader> SDLShaderFactory::GetShader(const std::string &name) {
  LOG_INFO(Render, "SDLShaderFactory::GetShader: {}", name);
  return std::make_unique<SDLShader>();
}

std::shared_ptr<Shader> SDLShaderFactory::LoadFromSource(const std::string &name, const std::unordered_map<eShaderType, std::string> &sources) {
  LOG_INFO(Render, "SDLShaderFactory::LoadFromSource: {}", name);
  return std::make_unique<SDLShader>();
}

std::shared_ptr<Shader> SDLShaderFactory::LoadFromFile(const std::string &name, const fs::path &path) {
  LOG_INFO(Render, "SDLShaderFactory::LoadFromFile: {}", name);
  return std::make_unique<SDLShader>();
}

std::shared_ptr<Shader> SDLShaderFactory::LoadFromFiles(const std::string &name, const std::unordered_map<eShaderType, fs::path> &sources) {
  LOG_INFO(Render, "SDLShaderFactory::LoadFromFiles: {}", name);
  return std::make_unique<SDLShader>();
}

std::shared_ptr<Shader> SDLShaderFactory::LoadFromBinary(const std::string &name, const std::unordered_map<eShaderType, std::vector<u32>> &sources) {
  LOG_INFO(Render, "SDLShaderFactory::LoadFromBinary: {}", name);
  return std::make_unique<SDLShader>();
}

} // namespace Render
#endif
