﻿#ifndef POLISHPLUGIN_H
#define POLISHPLUGIN_H

#include <QObject>
#include "westernlanguagesplugin.h"

class PolishPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "io.maliit.keyboard.LanguagePlugin.1" FILE "polishplugin.json")

public:
    explicit PolishPlugin(QObject* parent = nullptr)
        : WesternLanguagesPlugin(parent)
    {
    }

    ~PolishPlugin() override = default;
};

#endif // POLISHPLUGIN_H
