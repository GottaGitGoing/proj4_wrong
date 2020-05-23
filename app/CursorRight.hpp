// CursorRight.hpp

#ifndef CURSOR_RIGHT
#define CURSOR_RIGHT

#include "Keypress.hpp"
#include "Command.hpp"

class CursorRight : public Command
{

    void execute(EditorModel& model) override;
};

#endif