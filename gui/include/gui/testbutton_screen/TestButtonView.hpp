#ifndef TESTBUTTON_VIEW_HPP
#define TESTBUTTON_VIEW_HPP

#include <gui_generated/testbutton_screen/TestButtonViewBase.hpp>
#include <gui/testbutton_screen/TestButtonPresenter.hpp>

class TestButtonView : public TestButtonViewBase
{
public:
    TestButtonView();
    virtual ~TestButtonView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TESTBUTTON_VIEW_HPP
