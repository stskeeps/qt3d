/****************************************************************************
**
** Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QGLDOME_H
#define QGLDOME_H

#include <Qt3D/qt3dglobal.h>

QT_BEGIN_NAMESPACE

class QGLBuilder;

class Q_QT3D_EXPORT QGLDome
{
public:
    explicit QGLDome(float diameter_ = 1.0f, int depth = 3, bool baseEnabled_ = true)
        : m_diameter(diameter_), m_subdivisionDepth(depth), m_baseEnabled(baseEnabled_) {}
    virtual ~QGLDome();

    float diameter() const { return m_diameter; }
    void setDiameter(float diameter_) { m_diameter = diameter_; }

    int subdivisionDepth() const { return m_subdivisionDepth; }
    void setSubdivisionDepth(int depth) { m_subdivisionDepth = depth; }

    bool baseEnabled() const {return m_baseEnabled; }
    void setBaseEnabled(bool enabled) {m_baseEnabled = enabled;}

private:
    float m_diameter;
    int m_subdivisionDepth;
    bool m_baseEnabled;
};

Q_QT3D_EXPORT QGLBuilder& operator<<(QGLBuilder& builder, const QGLDome& dome);

QT_END_NAMESPACE

#endif
