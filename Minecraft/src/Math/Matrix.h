#pragma once

#include "../GlmCommon.h"

struct Entity;

namespace Math
{
    Matrix4 createViewMatrix(const Entity& entity);
    Matrix4 createModelMatrix(const Entity& entity);
    Matrix4 createProjMatrix();

} // namespace Math
