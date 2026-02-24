#include <gui/model/Model.hpp>

extern "C" {
    extern char guiString[50];
}

Model::Model() : modelListener(0)
{
}

void Model::bind(ModelListener* listener)
{
    modelListener = listener;
}

void Model::tick()
{
}

const char* Model::getGuiString()
{
    return guiString;
}
