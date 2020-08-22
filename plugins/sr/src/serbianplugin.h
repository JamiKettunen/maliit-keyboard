﻿#ifndef SERBIANPLUGIN_H
#define SERBIANPLUGIN_H

#include <QObject>
#include "westernlanguagesplugin.h"

class SerbianPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "io.maliit.keyboard.LanguagePlugin.1" FILE "serbianplugin.json")

public:
    explicit SerbianPlugin(QObject* parent = nullptr)
        : WesternLanguagesPlugin(parent)
    {
    }

    ~SerbianPlugin() override = default;
};

#endif // SERBIANPLUGIN_H
