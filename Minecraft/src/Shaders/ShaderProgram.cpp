#include "ShaderProgram.h"
#include "ShaderLoader.h"

namespace Shader
{
    ShaderProgram::ShaderProgram(const std::string & vertexFile, const std::string & fragmentFile)
        : m_programID (loadShader(vertexFile, fragmentFile))
    {

    }

    ShaderProgram::~ShaderProgram()
    {
        glDeleteProgram(m_programID);
    }

    void ShaderProgram::bind()
    {
        glUseProgram(m_programID);
    }

    void ShaderProgram::unbind()
    {
        glUseProgram(0);
    }

    void ShaderProgram::loadFloat(GLuint location, float value)
    {
        glUniform1f(location, value);
    }

    GLuint ShaderProgram::getID() const
    {
        return m_programID;
    }

} // namespace Shader
