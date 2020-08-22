﻿#ifndef GREEKPLUGIN_H
#define GREEKPLUGIN_H

#include <QObject>
#include "westernlanguagesplugin.h"

class GreekPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "io.maliit.keyboard.LanguagePlugin.1" FILE "greekplugin.json")

public:
    explicit GreekPlugin(QObject* parent = nullptr)
        : WesternLanguagesPlugin(parent)
    {
    }

    ~GreekPlugin() override = default;
};

#endif // GREEKPLUGIN_H
