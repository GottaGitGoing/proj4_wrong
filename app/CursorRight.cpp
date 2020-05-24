// CursorRight.cpp

#include "Command.hpp"
#include "CursorRight.hpp"

CursorRight::CursorRight();

void CursorRight::execute(EditorModel& model)
{

    model.moveCursor('R');
}

void CursorRight::undo(EditorModel& model)
{
    return;
}