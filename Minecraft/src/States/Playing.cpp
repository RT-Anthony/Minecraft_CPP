#include <iostream>
#include <GL/glew.h>

#include <SFML/System/Clock.hpp>

#include "Playing.h"
#include "../Renderer/Master.h"
#include "../Camera.h"

namespace State
{
    sf::Clock clock;

    Playing::Playing(Application & application) : GameState(application)
    {
        m_texture.load("grass");
        m_texture.bind();

        m_quad.position.z -= 2;
    }

    void Playing::input(Camera& camera)
    {

    }

    void Playing::update(Camera& camera, float dt)
    {
        camera.input(dt);
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        renderer.draw(m_quad);
    }
}
