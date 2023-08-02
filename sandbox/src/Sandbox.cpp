#include <lumacia/Lumancia.h>

class Sandbox : public LMC::Application {

public:
    Sandbox(/* args */) {
    }

    ~Sandbox() {
    }

};

LMC::Application* LMC::CreateApplication(){
    return new Sandbox();
}
