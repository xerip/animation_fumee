#include "smoke.h"
#include <ctime>
#include <math.h>


Smoke::Smoke(QVector3D origin, float timeInterval)
{
    this->origin = origin;
    this->timeInterval = timeInterval;
    this->elapseTime = 0;
    this->list_puff = list_puff;
}

void Smoke::animate(float dt) //animation de la fumee
{
    this->elapseTime += dt;
    if (this->elapseTime > this->timeInterval) //ajout de bouffees
    {
        this->elapseTime=0;
        srand(time(NULL));
        float ttl = (rand() % 4) + 5; //nombre aleatoire entre 5 et 8
        Puff puff(QVector3D(0.0f, 0.25f, 0.0f), 3.0f, QVector3D(0.5f, 1.75f, 0.5f), ttl);
        list_puff.push_back(puff);
    }

    list<Puff>::iterator i; //suppression de bouffees
    i = list_puff.begin();
    while( i != list_puff.end() )
    {
    if( i->get_ttl() <= 0 )
    i = list_puff.erase(i);
    else
    i++;
    }

    i = list_puff.begin(); //calcul des nouvelles positions
    while( i != list_puff.end() )
    {
            i->animate(dt);
            i++;
    }
}

void Smoke::display(QOpenGLShaderProgram *sp, QMatrix4x4 modelMatrix) //affiche la fumee
{
    list<Puff>::iterator i;
    i = list_puff.begin();
    while( i != list_puff.end() )
    {
        i->display(sp, modelMatrix);
        i++;
    }
}
