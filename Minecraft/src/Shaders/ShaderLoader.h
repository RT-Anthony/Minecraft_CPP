#pragma once

#include <string>
#include <GL/glew.h>

namespace Shader
{
    GLuint loadShader(const std::string& vertexFile, const std::string& fragmentFile);
} // namespace Shader
