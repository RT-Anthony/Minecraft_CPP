#pragma once

#include <stack>
#include <memory>

#include "States/GameState.h"
#include "Renderer/Master.h"
#include "Entity.h"

class Application
{
public:
    Application();

    void runMainGameLoop();

    void pushState(std::unique_ptr<State::GameState> state);
    void popState();

private:
    std::stack<std::unique_ptr<State::GameState>> m_states;

    Renderer::Master m_renderer;
    Entity camera;
};
