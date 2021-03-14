#include "appliance.h"

Appliance::Appliance(QObject *parent) : QObject(parent) //here we SHOULD NOT add the classes, as we did for Inheritance,say Freezer(parent()
{

}

bool Appliance::grill()
{
    return true; //added this, if u want to build something u can do it here
}

bool Appliance::cook()
{
    return true;
}

bool Appliance::freeze()
{
    return true;
}
