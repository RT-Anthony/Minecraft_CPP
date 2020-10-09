#include <iostream>
#include <GL/glew.h>

#include <SFML/System/Clock.hpp>

#include "Playing.h"
#include "../Renderer/Master.h"

namespace State
{
    sf::Clock clock;

    std::vector <GLfloat> vertexPositions = { 0.5, 0.5,
                                             -0.5, 0.5,
                                             -0.5, -0.5,
                                             0.5, -0.5 };

    std::vector <GLfloat> textureCoords = { 1.0, 1.0,
                                            0.0, 1.0,
                                            0.0, 0.0,
                                            1.0, 0.0};

    std::vector<GLuint> indices = { 0, 1, 2,
                                    2, 3, 0 };

    Playing::Playing(Application & application) : GameState(application)
        , m_model(vertexPositions, textureCoords, indices)
    {
        m_texture.load("grass");
        m_texture.bind();
    }
    void Playing::input()
    {
    }
    void Playing::update()
    {
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        renderer.draw(m_model);
    }
}
