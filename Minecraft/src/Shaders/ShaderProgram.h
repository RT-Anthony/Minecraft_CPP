#pragma once

#include <string>
#include <GL/glew.h>

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
        void bindAttribute(GLuint location, const GLchar* name);
        virtual void bindAttributes() = 0;

    private:
        GLuint m_programID;

        GLuint m_vertexShaderID;
        GLuint m_fragmentShaderID;

    }; // class ShaderProgram

} // namespace Shader
