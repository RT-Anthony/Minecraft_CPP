#pragma once

#include "ShaderProgram.h"

namespace Shader
{
    class SimpleShader : public ShaderProgram
    {
    public:
        SimpleShader();

    private:
        void bindAttributes() override;
    };

} // namespace Shader