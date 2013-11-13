#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent)
    : QGLWidget(parent)
//    , _gameLogic(10, 20)
{
//    _floor = new Parallelepiped(new Point<float>(0, -0.05, 0), new Point<float>())
//    _gameLogic = GameLogic(10, 20);
//    _gameLogic = new GameLogic(10, 20);
}

void GLWidget::initializeGL()
{
    glClearColor(0, 0.3, 0.3, 1);
}

void GLWidget::UpdateViewPoint()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(  _position.getX()/10 + (5 * sin(_rotation.getY()*PI/180))
              , _position.getY()/10 - (5 * cos(_rotation.getY()*PI/180) * sin(_rotation.getX()*PI/180))
              , _position.getZ()/10 + (5 * cos(_rotation.getX()*PI/180) * cos(_rotation.getY()*PI/180))
              , _position.getX()/10
              , _position.getY()/10
              , _position.getZ()/10
              , -sin(_rotation.getZ()*PI/180), cos(_rotation.getZ()*PI/180), 0);
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

//    glRotatef(1, _rotation.getX()
//               , _rotation.getY()
//               , _rotation.getZ());
//    glTranslatef(_position.getX()/10, _position.getY()/10, _position.getZ()/10);

/*
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5, -0.5, 0);
        glVertex3f( 0.5, -0.5, 0);
        glVertex3f( 0.5,  0.5, 0);
    glEnd();
*/

    Parallelepiped p = Parallelepiped(Point3D<float>(0, -0.05, 0)
                                      , Point3D<float>(1, 0.1, 1));

    DrawParallelepiped(&p , 0.5, 0, 0);

//    glRotatef(1, -_rotation.getX()
//               , -_rotation.getY()
//               , -_rotation.getZ());
//    glTranslatef(-_position.getX()/10, -_position.getY()/10, -_position.getZ()/10);
}

void GLWidget::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (float)w/h, 0.01, 100.0);
    UpdateViewPoint();
}

void GLWidget::on_hS_Dx_sliderMoved(int position)
{
    _position.setX(position);
    this->UpdateViewPoint();
    this->repaint();
}

void GLWidget::on_hS_Dy_sliderMoved(int position)
{
    _position.setY(position);
    this->UpdateViewPoint();
    this->repaint();
}
void GLWidget::on_hS_Dz_sliderMoved(int position)
{
    _position.setZ(position);
    this->UpdateViewPoint();
    this->repaint();
}

void GLWidget::on_hS_Rx_sliderMoved(int position)
{
    _rotation.setX(position);
    this->UpdateViewPoint();
    this->repaint();
}

void GLWidget::on_hS_Ry_sliderMoved(int position)
{
    _rotation.setY(position);
    this->UpdateViewPoint();
    this->repaint();
}
void GLWidget::on_hS_Rz_sliderMoved(int position)
{
    _rotation.setZ(position);
    this->UpdateViewPoint();
    this->repaint();
}

void GLWidget::DrawParallelepiped(Parallelepiped *p
                                  , float r, float g, float b)
{
    Point3D<float> center = p->getCenter();
    Point3D<float> size = p->getSize();
    glBegin(GL_QUADS);
    glColor3f(r, g, b);

//front
    glVertex3f(center.getX() + size.getX()/2, center.getY() + size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() + size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() - size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() - size.getY()/2, center.getZ() - size.getZ()/2);

//top
    glVertex3f(center.getX() + size.getX()/2, center.getY() + size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() + size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() + size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() + size.getY()/2, center.getZ() - size.getZ()/2);

//left
    glVertex3f(center.getX() - size.getX()/2, center.getY() + size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() + size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() - size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() - size.getY()/2, center.getZ() - size.getZ()/2);

//right
    glVertex3f(center.getX() + size.getX()/2, center.getY() + size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() - size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() - size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() + size.getY()/2, center.getZ() + size.getZ()/2);

//down
    glVertex3f(center.getX() + size.getX()/2, center.getY() - size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() - size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() - size.getY()/2, center.getZ() - size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() - size.getY()/2, center.getZ() - size.getZ()/2);

//rear
    glVertex3f(center.getX() - size.getX()/2, center.getY() + size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() + size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() + size.getX()/2, center.getY() - size.getY()/2, center.getZ() + size.getZ()/2);
    glVertex3f(center.getX() - size.getX()/2, center.getY() - size.getY()/2, center.getZ() + size.getZ()/2);

    glEnd();
}
