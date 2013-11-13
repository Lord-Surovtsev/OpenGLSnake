#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>

#include <math.h>
using namespace std;
#define PI 3.14159265

#include"glut.h"

#include "parallelepiped.h"
#include "gamelogic.h"

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);
    
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

public slots:
    void on_hS_Dx_sliderMoved(int position);
    void on_hS_Dy_sliderMoved(int position);
    void on_hS_Dz_sliderMoved(int position);

    void on_hS_Rx_sliderMoved(int position);
    void on_hS_Ry_sliderMoved(int position);
    void on_hS_Rz_sliderMoved(int position);

private:
    void DrawParallelepiped(Parallelepiped* p, float r, float g, float b);
    void UpdateViewPoint();

private:
    Point3D<float> _position;
    Point3D<float> _rotation;
//    GameLogic* _gameLogic;
//    GameLogic _gameLogic;
//    Parallelepiped* _floor;
};

#endif // GLWIDGET_H
