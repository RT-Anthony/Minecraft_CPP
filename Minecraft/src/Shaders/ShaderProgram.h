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
        virtual void getUniformLocations() = 0;

        GLuint getID() const;

        void loadFloat(GLuint location, float value);

    private:
        GLuint m_programID;
    }; // class ShaderProgram

} // namespace Shader
