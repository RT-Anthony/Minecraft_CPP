#include <iostream>
#include <GL/glew.h>

#include <SFML/System/Clock.hpp>

#include "Playing.h"
#include "../Renderer/Master.h"
#include "../Camera.h"

namespace State
{
    sf::Clock clock;

    Playing::Playing(Application & application) : GameState(application), m_texture("TextureAtlas", 512, 16), m_quad(m_texture)
    {
        m_texture.bind();

        m_quad.position.z -= 2;
        m_quad.position.y -= 2;
    }

    void Playing::input(Camera& camera)
    {

    }

    void Playing::update(Camera& camera, float dt)
    {
        //m_quad.rotation += 0.1;
        camera.input(dt);
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        renderer.draw(m_quad);
    }
}
