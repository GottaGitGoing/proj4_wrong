// EditorModel.cpp
//
// ICS 45C Spring 2020
// Project #4: People Just Love to Play with Words
//
// Implementation of the EditorModel class

#include "EditorModel.hpp"
#include "EditorException.hpp"




EditorModel::EditorModel()
{
}


int EditorModel::cursorLine() const
{
    return 1;
}


int EditorModel::cursorColumn() const 
{
    return getCursorColumn();
}


int EditorModel::lineCount() const
{
    return 1;
}


const std::string& EditorModel::line(int lineNumber) const
{
    static std::string removeThis = "BooEdit!";
    return removeThis;
}


const std::string& EditorModel::currentErrorMessage() const
{
    static std::string removeThis = "";
    return removeThis;
}


void EditorModel::setErrorMessage(const std::string& errorMessage)
{
}


void EditorModel::clearErrorMessage()
{
}

// ------------- New Helper Methods ---------------

int EditorModel::getCursorColumn() const
{
    return cursor_col;
}

void EditorModel::moveCursor(char direction)
{
    if (direction == 'R')
    {
        cursor_col +=1;
    }
    else if (direction == 'L')
    {
        cursor_col -=1;
    }
    
}
