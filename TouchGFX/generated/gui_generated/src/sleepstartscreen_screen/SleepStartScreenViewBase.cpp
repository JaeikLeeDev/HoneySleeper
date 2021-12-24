/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/sleepstartscreen_screen/SleepStartScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

SleepStartScreenViewBase::SleepStartScreenViewBase() :
    buttonCallback(this, &SleepStartScreenViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_SLEEPSTARTSCREEN_ID));

    buttonCancel.setXY(14, 7);
    buttonCancel.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTONCANCELDONERELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTONCANCELDONEPRESSED_ID));
    buttonCancel.setLabelText(touchgfx::TypedText(T___SINGLEUSE_5QAN));
    buttonCancel.setLabelColor(touchgfx::Color::getColorFromRGB(51, 51, 51));
    buttonCancel.setLabelColorPressed(touchgfx::Color::getColorFromRGB(17, 17, 17));
    buttonCancel.setAlpha(230);
    buttonCancel.setAction(buttonCallback);

    textAreaHope.setXY(121, 143);
    textAreaHope.setColor(touchgfx::Color::getColorFromRGB(17, 17, 17));
    textAreaHope.setLinespacing(0);
    textAreaHope.setAlpha(230);
    textAreaHope.setTypedText(touchgfx::TypedText(T___SINGLEUSE_91MP));

    textAreaWakeupAt.setXY(173, 95);
    textAreaWakeupAt.setColor(touchgfx::Color::getColorFromRGB(17, 17, 17));
    textAreaWakeupAt.setLinespacing(0);
    textAreaWakeupAt.setAlpha(230);
    touchgfx::Unicode::snprintf(textAreaWakeupAtBuffer1, TEXTAREAWAKEUPATBUFFER1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_3JJ3).getText());
    textAreaWakeupAt.setWildcard1(textAreaWakeupAtBuffer1);
    touchgfx::Unicode::snprintf(textAreaWakeupAtBuffer2, TEXTAREAWAKEUPATBUFFER2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ID00).getText());
    textAreaWakeupAt.setWildcard2(textAreaWakeupAtBuffer2);
    textAreaWakeupAt.resizeToCurrentText();
    textAreaWakeupAt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_U0K9));

    add(__background);
    add(background);
    add(buttonCancel);
    add(textAreaHope);
    add(textAreaWakeupAt);
}

void SleepStartScreenViewBase::setupScreen()
{

}

void SleepStartScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonCancel)
    {
        //ReturnToMain
        //When buttonCancel clicked change screen to MainScreen
        //Go to MainScreen with screen transition towards North
        application().gotoMainScreenScreenSlideTransitionNorth();
    }
}
