#pragma once

#include "GameState.h"
#include "Model.h"

#include "Shaders/SimpleShader.h"
#include "Texture/Texture.h"

#include "Temp/Quad.h"

class Application;

namespace State
{
    class Playing : public GameState
    {
    public:
        Playing(Application& application);

        void input(Entity& camera) override;
        void update(Entity& camera) override;
        void draw(Renderer::Master& renderer) override;

    private:
        //Quad m_quad;
        std::vector<Quad*> m_quads;

        Shader::SimpleShader m_shader;
        Texture::BasicTexture m_texture;
    };

}
