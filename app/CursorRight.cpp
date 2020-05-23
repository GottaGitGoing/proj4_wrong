// CursorRight.cpp

#include "Command.hpp"
#include "CursorRight.hpp"


void CursorRight::execute(EditorModel& model)
{

    int lineNum = model.cursorColumn();
    model.line(lineNum);
}