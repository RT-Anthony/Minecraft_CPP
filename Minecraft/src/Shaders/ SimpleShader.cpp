#include "SimpleShader.h"

#include "../Math/Matrix.h"

namespace Shader
{
    SimpleShader::SimpleShader() : ShaderProgram("SimpleVertex", "SimpleFragment")
    {
        getUniformLocations();

        bind();
        loadMatrix4(m_locationProjMatrix, Math::createProjMatrix());
        unbind();
    }

    void SimpleShader::setTime(float time)
    {
        loadFloat(m_locationTime, time);
    }

    void SimpleShader::setViewMatrix(const Matrix4& matrix)
    {
        loadMatrix4(m_locationViewMatrix, matrix);
    }

    void SimpleShader::setModelMatrix(const Matrix4& matrix)
    {
        loadMatrix4(m_locationModelMatrix, matrix);
    }

    void SimpleShader::setProjMatrix(const Matrix4& matrix)
    {
        loadMatrix4(m_locationProjMatrix, matrix);
    }

    void SimpleShader::getUniformLocations()
    {
        m_locationTime = glGetUniformLocation(getID(), "time");
        
        m_locationViewMatrix = glGetUniformLocation(getID(), "viewMatrix");
        m_locationModelMatrix = glGetUniformLocation(getID(), "modelMatrix");
        m_locationProjMatrix = glGetUniformLocation(getID(), "projMatrix");
    }
}