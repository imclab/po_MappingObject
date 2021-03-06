/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "ProjectionMappingDemoApp.h"

namespace po {
    po::Object *createObjectForID(uint uid) {
        return new ProjectionMappingDemoApp();
    }

    void setupApplication() {
        applicationCreateWindow(0, po::WINDOW_TYPE_NORMAL, "ProjectionMappingDemo", 100, 100, 1024, 768);
    }

    void cleanupApplication() {
    }
} /*End po Namespace*/