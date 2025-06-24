//-----------
//
// undoHistory.h
//
//-----------
#ifndef UNDO_HISTORY_H
#define UNDO_HISTORY_H

#include "singleton.h"

class UndoHistory : public Singleton<UndoHistory>
{
private:
    friend class Singleton<UndoHistory>;
    UndoHistory() = default;
    ~UndoHistory() = default;
};

#endif