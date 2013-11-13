#include "gamelogic.h"

GameLogic::GameLogic(int height, int width)
    : _field((char **)0)
    , _width(0)
    , _height(0)
{
    _field = 0;
    NewGame(height, width);
}

void GameLogic::NewGame(int height, int width)
{
return;
    if ((height < 0) || (width < 0))
    {
        //throw "gfgf";
        height = 10;
        width = 10;
    }
    if (_field != 0)
    {
        for (int i = 0; i < _height; i++)
        {
            delete[] _field[i];
        }
        delete[] _field;
    }

    _height = height;
    _width = width;
    _field = new char*[_height];
    for (int i = 0; i < height; i++)
    {
        _field[i] = new char[_width];
        for (int j = 0; j < _width; j++)
        {
            _field[i][j] = 0;
        }
    }
    _headX = _height / 2;
    _headY = _width / 2;
    _field[_headX][_headY] = 'U';
}

int GameLogic::getWidth()
{
    return _width;
}

int GameLogic::getHeight()
{
    return _height;
}

char** GameLogic::getField()
{
    char** res;
    res = new char*[_height];
    for (int i = 0; i < _height; i++)
    {
        res[i] = new char[_width];
        for (int j = 0; j < _width; j++)
        {
            if ('B' == _field[i][j])
            {
                res[i][j] = 'B';
                continue;
            }
            if (0 != _field[i][j])
            {
                res[i][j] = 'S';
            }
        }
    }
    return res;
}

void GameLogic::setNextAction(char action)
{
    _action = action;
}

char GameLogic::getCurrentAcrion()
{
    return _action;
}

void GameLogic::NextIteration()
{

}
