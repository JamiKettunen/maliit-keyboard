﻿#ifndef ARABICPLUGIN_H
#define ARABICPLUGIN_H

#include <QObject>
#include "westernlanguagesplugin.h"

class ArabicPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "io.maliit.keyboard.LanguagePlugin.1" FILE "arabicplugin.json")

public:
    explicit ArabicPlugin(QObject* parent = nullptr)
        : WesternLanguagesPlugin(parent)
    {
    }

    ~ArabicPlugin() override = default;
};

#endif // ARABICPLUGIN_H
