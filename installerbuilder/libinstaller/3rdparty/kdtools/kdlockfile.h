/****************************************************************************
** Copyright (C) 2001-2010 Klaralvdalens Datakonsult AB.  All rights reserved.
**
** This file is part of the KD Tools library.
**
** Licensees holding valid commercial KD Tools licenses may use this file in
** accordance with the KD Tools Commercial License Agreement provided with
** the Software.
**
**
** This file may be distributed and/or modified under the terms of the
** GNU Lesser General Public License version 2 and version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE.LGPL included.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** Contact info@kdab.com if any conditions of this licensing are not
** clear to you.
**
**********************************************************************/

#ifndef KDTOOLS_KDLOCKFILE_H
#define KDTOOLS_KDLOCKFILE_H

#include <kdtoolsglobal.h>

class KDTOOLS_EXPORT KDLockFile
{
public:
    explicit KDLockFile(const QString &name);
    ~KDLockFile();

    QString errorString() const;

    bool lock();
    bool unlock();

private:
    Q_DISABLE_COPY(KDLockFile)
    class Private;
    Private *d;
};

#endif // KDTOOLS_KDLOCKFILE_H
