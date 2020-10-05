#pragma once

#include <GL/glew.h>
#include <string>

namespace Texture
{
    class BasicTexture
    {
    public:
        void load(const std::string& fileName);

        void bind();
        void unbind();

    private:
        GLuint m_textureID;
    }; // BasicTexture

} // namespace Texture