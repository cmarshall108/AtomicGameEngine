
#pragma once

#include "UIWidget.h"

#include <TurboBadger/tb_editfield.h>

namespace Atomic
{

enum TEXT_ALIGN
{
    TEXT_ALIGN_LEFT,		///< Aligned left
    TEXT_ALIGN_RIGHT,	///< Aligned right
    TEXT_ALIGN_CENTER	///< Aligned center
};

enum UI_EDIT_TYPE {
    UI_EDIT_TYPE_TEXT = tb::EDIT_TYPE_TEXT,
    UI_EDIT_TYPE_SEARCH = tb::EDIT_TYPE_SEARCH,
    UI_EDIT_TYPE_PASSWORD = tb::EDIT_TYPE_PASSWORD,
    UI_EDIT_TYPE_EMAIL = tb::EDIT_TYPE_EMAIL,
    UI_EDIT_TYPE_PHONE = tb::EDIT_TYPE_PHONE,
    UI_EDIT_TYPE_URL = tb::EDIT_TYPE_URL,
    UI_EDIT_TYPE_NUMBER = tb::EDIT_TYPE_NUMBER
};

class UIEditField : public UIWidget
{
    OBJECT(UIEditField)

public:

    UIEditField(Context* context, bool createWidget = true);
    virtual ~UIEditField();

    void AppendText(const String& text);

    void SetTextAlign(TEXT_ALIGN align);

    void SetEditType(UI_EDIT_TYPE type);

    void SetReadOnly(bool readonly);

    void ScrollTo(int x, int y);

    void SetWrapping(bool wrap);
    bool GetWrapping();

protected:

    virtual bool OnEvent(const tb::TBWidgetEvent &ev);

private:

};

}