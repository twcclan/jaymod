#ifndef GAME_CMD_SWAP_H
#define GAME_CMD_SWAP_H

///////////////////////////////////////////////////////////////////////////////

class Swap : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    Swap();
    ~Swap();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_SWAP_H