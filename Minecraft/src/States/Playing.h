#pragma once

#include "GameState.h"
#include "Model.h"

class Application;

namespace State
{
    class Playing : public GameState
    {
    public:
        Playing(Application& application);

        void input() override;
        void update() override;
        void draw() override;

    private:
        Model m_model;
    };

}