﻿#ifndef FRENCHPLUGIN_H
#define FRENCHPLUGIN_H

#include <QObject>
#include "westernlanguagesplugin.h"

//#include <presage.h>

class FrenchPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "io.maliit.keyboard.LanguagePlugin.1" FILE "frenchplugin.json")

public:
    explicit FrenchPlugin(QObject* parent = nullptr)
        : WesternLanguagesPlugin(parent)
    {
    }

    ~FrenchPlugin() override = default;
};

#endif // FRENCHPLUGIN_H
