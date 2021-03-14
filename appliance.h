#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>

//include all the headers and implement their v.ftns
#include "freezer.h"
#include "microwave.h"
#include "toaster.h"


//Looks like inheritance, but its not True Inheritance-its 'INTERFACE' !
class Appliance : public QObject, public Freezer, public Microwave, public Toaster
{
    Q_OBJECT
public:
    explicit Appliance(QObject *parent = 0);

signals:

public slots:

    // Toaster interface
public:
    bool grill();

    // Microwave interface
public:
    bool cook();

    // Freezer interface
public:
    bool freeze();
};

#endif // APPLIANCE_H
