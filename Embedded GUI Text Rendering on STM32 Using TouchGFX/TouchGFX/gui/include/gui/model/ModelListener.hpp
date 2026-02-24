#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

class ModelListener
{
public:
    virtual ~ModelListener() {}
    virtual void updateText(const char* text) {}
};

#endif
