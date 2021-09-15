// Copyright (c) 2019-2020 The PIVX developers
// Copyright (c) 2021 The Posante developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSBACKUPWALLET_H
#define SETTINGSBACKUPWALLET_H

#include "qt/posante/pwidget.h"
#include <QWidget>

namespace Ui
{
class SettingsBackupWallet;
}

class SettingsBackupWallet : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsBackupWallet(PosanteGUI* _window, QWidget* parent = nullptr);
    ~SettingsBackupWallet();

private Q_SLOTS:
    void selectFileOutput();
    void changePassphrase();

private:
    Ui::SettingsBackupWallet* ui;
};

#endif // SETTINGSBACKUPWALLET_H
