#ifndef GAME_CMD_LSUSERS_H
#define GAME_CMD_LSUSERS_H

///////////////////////////////////////////////////////////////////////////////

class UserList : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    UserList();
    ~UserList();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_LSUSERS_H