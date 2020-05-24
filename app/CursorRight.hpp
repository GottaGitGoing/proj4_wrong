// CursorRight.hpp

#ifndef CURSOR_RIGHT
#define CURSOR_RIGHT

#include "Keypress.hpp"
#include "Command.hpp"

class CursorRight : public Command
{
public:
    CursorRight();
    void execute(EditorModel& model) ;
    void undo(EditorModel& model);
};

#endif