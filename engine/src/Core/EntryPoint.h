#pragma once

extern LMC::Application* LMC::CreateApplication();

int main(int argc, char** argv) {
    auto app = LMC::CreateApplication();
    app->run();
    delete app;
}