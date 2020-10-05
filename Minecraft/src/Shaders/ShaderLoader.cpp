#include "ShaderLoader.h"

#include <fstream>
#include <sstream>
#include <stdexcept>

namespace Shader
{
    GLuint compileShader(const GLchar* source, GLenum type)
    {
        GLuint id = glCreateShader(type);

        glShaderSource(id, 1, &source, nullptr);
        glCompileShader(id);
        GLint isSuccess;
        GLchar infoLog[512];

        glGetShaderiv(id, GL_COMPILE_STATUS, &isSuccess);

        if (!isSuccess)
        {
            glGetShaderInfoLog(id, 512, nullptr, infoLog);
            throw std::runtime_error("Error compiling shader: " + std::string(infoLog));
        }

        return id;
    }

    std::string getSource(const std::string& sourceFile)
    {
        std::ifstream inFile("Data/Shaders/" + sourceFile + ".glsl");
        std::stringstream source;
        
        if (!inFile.is_open())
        {
            throw std::runtime_error("Could not open file: " + sourceFile);
        }

        source << inFile.rdbuf();

        return source.str();
    }

    GLuint createProgram(GLuint vertexShaderID, GLuint fragmentShaderID)
    {
        GLuint id = glCreateProgram();

        glAttachShader(id, vertexShaderID);
        glAttachShader(id, fragmentShaderID);

        glLinkProgram(id);

        return id;
    }

    GLuint loadShader(const std::string & vertexFile, const std::string & fragmentFile)
    {
        std::string vertexSource = getSource(vertexFile);
        std::string fragmentSource = getSource(fragmentFile);

        GLuint vertexShaderID = compileShader(vertexSource.c_str(), GL_VERTEX_SHADER);
        GLuint fragmentShaderID = compileShader(fragmentSource.c_str(), GL_FRAGMENT_SHADER);

        GLuint programID = createProgram(vertexShaderID, fragmentShaderID);

        glDeleteShader(vertexShaderID);
        glDeleteShader(fragmentShaderID);

        return programID;
    }
} // namespace Shader
