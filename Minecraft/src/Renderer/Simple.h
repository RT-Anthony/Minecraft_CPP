#pragma once

#include <vector>

#include <SFML/System/Clock.hpp>

#include "../Shaders/SimpleShader.h"

class Model;

namespace Renderer
{

    class Simple
    {
    public:
        void draw(const Model& model);

        void update();

    private:
        void prepare(const Model& model);

        std::vector<const Model*> m_models;
        Shader::SimpleShader m_shader;
        sf::Clock m_clock;
    };

} // namespace Renderer