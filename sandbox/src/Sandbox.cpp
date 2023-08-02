#include <lumacia/Lumancia.h>

class Sandbox : public LMC::Application {

public:
    Sandbox(/* args */) {
    }

    ~Sandbox() {
    }


};

int main(){
    Sandbox* sb = new Sandbox();
    sb->run();
    delete sb;
    return 0;
}
