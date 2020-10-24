#include <iostream>
#include <GL/glew.h>

#include <SFML/System/Clock.hpp>

#include "Playing.h"
#include "../Renderer/Master.h"

namespace State
{
    sf::Clock clock;

    Playing::Playing(Application & application) : GameState(application)
    {
        m_texture.load("grass");
        m_texture.bind();

        int testSize = 50;

        for (int x = -testSize; x < testSize; x++)
        {
            for (int z = testSize; z > -testSize; z--)
            {
                Quad* quad = new Quad();
                quad->rotation.x = 90;
                quad->position = { x, -1, z };
                m_quads.push_back(quad);
            }
        }
        std::cout << m_quads.size() << std::endl;
    }

    void Playing::input(Entity& camera)
    {

    }

    void Playing::update(Entity& camera)
    {
        for (auto& quad : m_quads)
        {
            quad->position.y = sin(clock.getElapsedTime().asSeconds());
        }
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        for (auto& quad : m_quads)
            renderer.draw(*quad);
    }
}
