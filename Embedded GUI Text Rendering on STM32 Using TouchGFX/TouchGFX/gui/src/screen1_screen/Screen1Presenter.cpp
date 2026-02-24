#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/model/Model.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v), model(0)
{
}

void Screen1Presenter::bind(Model* m)
{
    model = m;
}

void Screen1Presenter::activate()
{
    if (model != 0)
    {
        view.displayText(model->getGuiString());
    }
}

void Screen1Presenter::deactivate()
{
}

void Screen1Presenter::updateText(const char* text)
{
    view.displayText(text);
}
