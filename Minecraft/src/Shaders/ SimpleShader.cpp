#include "SimpleShader.h"

namespace Shader
{
    SimpleShader::SimpleShader() : ShaderProgram("SimpleVertex", "SimpleFragment")
    {
        bindAttributes();
    }

    void SimpleShader::bindAttributes()
    {
        bindAttribute(0, "inVertexPosition");
    }
}