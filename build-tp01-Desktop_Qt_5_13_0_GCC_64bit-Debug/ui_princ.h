/********************************************************************************
** Form generated from reading UI file 'princ.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINC_H
#define UI_PRINC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glarea.h"

QT_BEGIN_NAMESPACE

class Ui_Princ
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    GLArea *glarea;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Princ)
    {
        if (Princ->objectName().isEmpty())
            Princ->setObjectName(QString::fromUtf8("Princ"));
        Princ->resize(800, 600);
        centralWidget = new QWidget(Princ);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        glarea = new GLArea(centralWidget);
        glarea->setObjectName(QString::fromUtf8("glarea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glarea->sizePolicy().hasHeightForWidth());
        glarea->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(glarea);


        verticalLayout_2->addLayout(verticalLayout);

        Princ->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Princ);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Princ->setStatusBar(statusBar);
        menuBar = new QMenuBar(Princ);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        Princ->setMenuBar(menuBar);

        retranslateUi(Princ);

        QMetaObject::connectSlotsByName(Princ);
    } // setupUi

    void retranslateUi(QMainWindow *Princ)
    {
        Princ->setWindowTitle(QCoreApplication::translate("Princ", "TP1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Princ: public Ui_Princ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINC_H
