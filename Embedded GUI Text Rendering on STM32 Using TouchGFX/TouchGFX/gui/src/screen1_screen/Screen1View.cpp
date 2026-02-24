#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Unicode.hpp>

Screen1View::Screen1View()
{
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::displayText(const char* text)
{
    Unicode::fromUTF8((const uint8_t*)text,
                      textArea1Buffer,
                      TEXTAREA1_SIZE);

    textArea1.invalidate();
}



 