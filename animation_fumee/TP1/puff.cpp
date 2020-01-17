#include "puff.h"
#include "glarea.h"

Puff::Puff(QVector3D pos, float taille, QVector3D vitesse, float ttl)
{
    this->pos=pos;
    this->taille=taille;
    this->vitesse=vitesse;
    this->ttl=ttl;
}

void Puff::animate(float dt)
{
    this->pos=this->pos + this->vitesse * dt;
    this->taille+=dt;
    this->ttl-=dt;
}

void Puff::display(QOpenGLShaderProgram *sp, QMatrix4x4 modelMatrix) //affiche le puff
{
    modelMatrix.setToIdentity();
    modelMatrix.translate(this->pos);

    sp->setUniformValue("modelMatrix", modelMatrix);
    sp->setUniformValue("particleSize", this->taille);

    glDrawArrays(GL_TRIANGLES, 0, 6);

}

float Puff::get_ttl()
{
    return this->ttl;
}
