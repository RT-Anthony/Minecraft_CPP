#pragma once

#include <string>
#include <GL/glew.h>
#include "GlmCommon.h"

namespace Shader
{
    class ShaderProgram
    {
    public:
        ShaderProgram(const std::string& vertexFile, const std::string& fragmentFile);
        ~ShaderProgram();

        void bind();
        void unbind();

    protected:
        virtual void getUniformLocations() = 0;

        GLuint getID() const;

        void loadFloat(GLuint location, float value);
        void loadVector2(GLuint location, const Vector2& vector);
        void loadMatrix4(GLuint location, const Matrix4& matrix);

    private:
        GLuint m_programID;
    }; // class ShaderProgram

} // namespace Shader
