#pragma once

#include "GameState.h"
#include "Model.h"

#include "Shaders/SimpleShader.h"
#include "Texture/TextureAtlas.h"

#include "Temp/Quad.h"

class Application;
class Camera;

namespace State
{
    class Playing : public GameState
    {
    public:
        Playing(Application& application);

        void input(Camera& camera) override;
        void update(Camera& camera, float dt) override;
        void draw(Renderer::Master& renderer) override;

    private:
        Quad m_quad;
        //std::vector<Quad*> m_quads;

        Shader::SimpleShader m_shader;
        Texture::Atlas m_texture;
    };

}
