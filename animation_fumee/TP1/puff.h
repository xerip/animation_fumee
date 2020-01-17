#ifndef PUFF_H
#define PUFF_H

#include <QKeyEvent>
#include <QTimer>
#include <QElapsedTimer>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>

class Puff
{
public:
    Puff(QVector3D pos, float taille, QVector3D vitesse, float ttl);
    void animate(float dt);
    void display(QOpenGLShaderProgram *sp, QMatrix4x4 modelMatrix);
    float get_ttl();

private:
    QVector3D pos;
    float taille;
    QVector3D vitesse;
    float ttl;
    QMatrix4x4 modelMatrix;
    QOpenGLShaderProgram *sp;
};
#endif // PUFF_H
