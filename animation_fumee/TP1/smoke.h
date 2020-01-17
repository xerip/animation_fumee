#ifndef SMOKE_H
#define SMOKE_H

#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QElapsedTimer>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>
#include "puff.h"
#include <list>

using namespace std;

class Smoke
{
public:
    Smoke(QVector3D origine, float timeInterval);
    void animate(float dt);
    void display(QOpenGLShaderProgram *sp, QMatrix4x4 modelMatrix);

private:
    QVector3D origin;
    QMatrix4x4 modelMatrix;
    //QList<Puff> list_puff;
    list<Puff> list_puff;
    float timeInterval;
    float elapseTime;
    QOpenGLShaderProgram sp;
};

#endif // SMOKE_H
