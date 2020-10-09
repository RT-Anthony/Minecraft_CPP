#pragma once

class Application;

namespace Renderer
{
    class Master;
}

namespace State
{
    class GameState
    {
    public:
        GameState(Application& application);

        virtual void input() = 0;
        virtual void update() = 0;
        virtual void draw(Renderer::Master& renderer) = 0;

    protected:
        Application* m_application;
    };
}
