#ifndef SIMCENTER_CONFIG_FILE_H
#define SIMCENTER_CONFIG_FILE_H

#include <QString>
#include <QJsonObject>

QString getConfigOptionString(QString);
bool getConfigOptionInteger(QString option, int &returnValue);
QJsonObject getConfigOptionJSON(QString);


#endif // SIMCENTER_CONFIG_FILE_H
