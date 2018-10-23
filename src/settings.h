#ifndef SETTINGS_H
#define SETTINGS_H

#include <QtCore>
#include <QString>
#include <QDir>
#include <QStandardPaths>

class Settings
{
public:
    static QString OutputFormat;
    static QString OutputDirectory;
    static bool ChangeSamplerate;
    static bool Force16bitFLAC;
    static bool Multithreading;
};

#endif // SETTINGS_H