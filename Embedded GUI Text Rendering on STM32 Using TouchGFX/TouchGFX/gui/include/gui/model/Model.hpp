#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();
    void bind(ModelListener* listener);
    void tick();

    const char* getGuiString();

protected:
    ModelListener* modelListener;
};

#endif
