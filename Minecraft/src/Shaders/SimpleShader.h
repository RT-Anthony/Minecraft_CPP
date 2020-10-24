#pragma once

#include "ShaderProgram.h"
#include "GlmCommon.h"

namespace Shader
{
    class SimpleShader : public ShaderProgram
    {
    public:
        SimpleShader();

        void setTime(float Time);
        
        void setViewMatrix(const Matrix4& matrix);
        void setModelMatrix(const Matrix4& matrix);
        void setProjMatrix(const Matrix4& matrix);

    private:
        void getUniformLocations() override;

        GLuint m_locationTime = 0;
        GLuint m_locationViewMatrix = 0;
        GLuint m_locationModelMatrix = 0;
        GLuint m_locationProjMatrix = 0;
    };

} // namespace Shader