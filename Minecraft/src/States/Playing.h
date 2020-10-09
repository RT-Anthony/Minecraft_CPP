#pragma once

#include "GameState.h"
#include "Model.h"

#include "Shaders/SimpleShader.h"
#include "Texture/Texture.h"

class Application;

namespace State
{
    class Playing : public GameState
    {
    public:
        Playing(Application& application);

        void input() override;
        void update() override;
        void draw(Renderer::Master& renderer) override;

    private:
        Model m_model;

        Shader::SimpleShader m_shader;
        Texture::BasicTexture m_texture;
    };

}
