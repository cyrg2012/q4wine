/***************************************************************************
 *   Copyright (C) 2008, 2009, 2010, 2011 by Malakhov Alexey                           *
 *   brezerk@gmail.com                                                     *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                         *
 ***************************************************************************/

#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <memory>

#include "config.h"

#include "src/q4wine-gui/ui_InfoDialog.h"

#include <QDialog>
#include <QWidget>
#include <QSettings>

class InfoDialog : public QDialog, public Ui::InfoDialog
{
Q_OBJECT
public:
    explicit InfoDialog(int action, QWidget *parent = 0, Qt::WFlags f = 0);

private:
    int action;

signals:

public slots:

private slots:
    void cmdOk_clicked();
    void cmdCancel_clicked();

};

#endif // INFODIALOG_H
