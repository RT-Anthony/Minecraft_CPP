#pragma once

#include "ShaderProgram.h"

namespace Shader
{
    class SimpleShader : public ShaderProgram
    {
    public:
        SimpleShader();

        void setTime(float Time);

    private:
        void getUniformLocations() override;

        GLuint m_locationTime = 0;
    };

} // namespace Shader