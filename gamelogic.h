#ifndef GAMELOGIC_H
#define GAMELOGIC_H

class GameLogic
{
public:
    GameLogic(int height, int width);
    ~GameLogic();

    void NewGame(int height, int width);
    int getWidth();
    int getHeight();
    char** getField();
    void setNextAction(char action);
    char getCurrentAcrion();
    void NextIteration();
private:
    int _height;
    int _width;
    char** _field;
    char _action;
    int _headX;
    int _headY;
//    GameLogic _gameLogic(10, 20);
};

#endif // GAMELOGIC_H
