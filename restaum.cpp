#include "restaum.h"
#include "ui_restaum.h"

#include <QDebug>

RestaUm::RestaUm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RestaUm)
{
    ui->setupUi(this);

    QObject::connect(
                ui->actionSair,
                SIGNAL(triggered()),
                qApp,
                SLOT(quit()));

    QObject::connect( ui->actionSobre, SIGNAL(triggered()), this, SLOT(mostrarSobre()));

    QActionGroup* group = new QActionGroup(this);
    group->setExclusive(true);
    group->addAction(ui->actionBanquinho);
    group->addAction(ui->actionCruz);
    group->addAction(ui->actionFlecha);
    group->addAction(ui->actionLosango);
    group->addAction(ui->actionMais);
    group->addAction(ui->actionTradicional);
    group->addAction(ui->actionTriangulo);


    this->setFixedSize(this->size());


}

RestaUm::~RestaUm()
{
    delete ui;
}


void RestaUm :: mostrarSobre(){
    qDebug() << "Mostrando";
 }
