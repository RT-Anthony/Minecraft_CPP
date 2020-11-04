#pragma once

#include <vector>

#include <SFML/System/Clock.hpp>

#include "../Shaders/SimpleShader.h"

class Quad;
class Camera;

namespace Renderer
{

    class Simple
    {
    public:
        void draw(const Quad& quad);

        void update(const Camera& camera);

    private:
        void prepare(const Quad& quad);

        std::vector<const Quad*> m_quads;
        Shader::SimpleShader m_shader;
        sf::Clock m_clock;
    };

} // namespace Renderer