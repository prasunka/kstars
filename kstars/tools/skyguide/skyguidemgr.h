/***************************************************************************
                          skyguidemgr.h  -  K Desktop Planetarium
                             -------------------
    begin                : 2015/05/06
    copyright            : (C) 2015 by Marcos Cardinot
    email                : mcardinot@gmail.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef SKYGUIDEMGR_H
#define SKYGUIDEMGR_H

#include <QDockWidget>
#include <QQuickView>
#include <QWidget>

#include "skyguideobject.h"

class SkyGuideMgr
{

public:
    SkyGuideMgr();
    virtual ~SkyGuideMgr();

    inline QDockWidget* getDock() { return m_dock; }

private:
    QWidget* m_container;
    QDockWidget* m_dock;
    QQuickView* m_view;

    QList<SkyGuideObject*> m_skyGuideObjects;

    void loadAllSkyGuideObjects() const;
    void loadSkyGuideObject(const QString& jsonPath);
};

#endif // SKYGUIDEMGR_H
