// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2021 The Posante developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSWALLETOPTIONSWIDGET_H
#define SETTINGSWALLETOPTIONSWIDGET_H

#include "qt/posante/pwidget.h"
#include <QDataWidgetMapper>
#include <QWidget>
namespace Ui
{
class SettingsWalletOptionsWidget;
}

class SettingsWalletOptionsWidget : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsWalletOptionsWidget(PosanteGUI* _window, QWidget* parent = nullptr);
    ~SettingsWalletOptionsWidget();

    void setMapper(QDataWidgetMapper* mapper);
    void setSpinBoxStakeSplitThreshold(double val);

Q_SIGNALS:
    void saveSettings();
    void discardSettings();

public Q_SLOTS:
    void onResetClicked();

private:
    Ui::SettingsWalletOptionsWidget* ui;
};

#endif // SETTINGSWALLETOPTIONSWIDGET_H
