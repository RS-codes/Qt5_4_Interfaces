#include <QCoreApplication>
#include <QDebug> //include QDebug

#include "appliance.h" //include only the appliance class

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Appliance KitchenKit;  //create an instance

    qInfo() << "Can Cook : " << KitchenKit.cook();
    qInfo() << "Can grill : " << KitchenKit.grill();
    qInfo() << "Can freeze : " << KitchenKit.freeze();
    return a.exec();
}
