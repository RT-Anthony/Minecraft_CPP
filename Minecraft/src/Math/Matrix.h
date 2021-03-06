#pragma once

#include "../GlmCommon.h"

struct Entity;
class Camera;

namespace Math
{
    Matrix4 createViewMatrix(const Camera& entity);
    Matrix4 createModelMatrix(const Entity& entity);
    Matrix4 createProjMatrix();

} // namespace Math
