#pragma once

#include "Texture.h"

#include <vector>

#include "../GlmCommon.h"

namespace Texture
{
    class Atlas : public BasicTexture
    {
    public:
        Atlas(const std::string& textureName, GLuint size, GLuint textureSize);

        std::vector<GLfloat> getTextureCoords(const Vector2& location);

    private:
        const GLuint m_size;
        const GLuint m_textureSize;
    }; // class Atlas

} // namespace Textures
