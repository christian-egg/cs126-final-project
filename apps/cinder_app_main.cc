//
// Created by Christian Classen on 4/16/2021.
//

#include "runner_game_app.h"

using runnergame::RunnerGameApp;

void prepareSettings(RunnerGameApp::Settings* settings) {
    settings->setResizable(false);
}

// This line is a macro that expands into an "int main()" function.
CINDER_APP(RunnerGameApp, ci::app::RendererGl, prepareSettings);