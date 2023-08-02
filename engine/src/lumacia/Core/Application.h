#pragma once

#include "Core.h"

namespace LMC {

    class LMC_API Application {
    private:
        /* data */
    public:
        Application(/* args */);
        virtual ~Application();
        void run();
    };

    Application* CreateApplication();

}