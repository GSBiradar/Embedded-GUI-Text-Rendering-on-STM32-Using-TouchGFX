#ifndef SCREEN1PRESENTER_HPP
#define SCREEN1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <gui/model/Model.hpp>      // needed for Model pointer
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen1View;

class Screen1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen1Presenter(Screen1View& v);

    virtual void activate();
    virtual void deactivate();

    virtual void updateText(const char* text);

    /**
     * Binds this presenter to the application model. Called by the framework during
     * screen transitions. The presenter will also register itself as a listener
     * on the model so it can receive updates.
     */
    void bind(Model* m);

private:
    Screen1View& view;
    Model* model; ///< Pointer to the application model
};

#endif
