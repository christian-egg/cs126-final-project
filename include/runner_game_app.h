//
// Created by Christian Classen on 4/16/2021.
//

#pragma once

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

namespace runnergame {
class RunnerGameApp : public ci::app::App {
 public:
    RunnerGameApp();
    
    void draw() override;
    void update() override;
};

} // namespace runnergame