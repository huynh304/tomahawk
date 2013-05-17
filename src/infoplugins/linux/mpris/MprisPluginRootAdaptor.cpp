/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a mprispluginrootadaptor -c MprisPluginRootAdaptor MprisPluginRootAdaptor.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "MprisPluginRootAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class MprisPluginRootAdaptor
 */

MprisPluginRootAdaptor::MprisPluginRootAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MprisPluginRootAdaptor::~MprisPluginRootAdaptor()
{
    // destructor
}

bool MprisPluginRootAdaptor::canQuit() const
{
    // get the value of property CanQuit
    return qvariant_cast< bool >(parent()->property("CanQuit"));
}

bool MprisPluginRootAdaptor::canRaise() const
{
    qDebug() << Q_FUNC_INFO;
    // get the value of property CanRaise
    bool ret = qvariant_cast< bool >(parent()->property("CanRaise"));
    qDebug() << "ret: " << ret;
    return ret;
}

QString MprisPluginRootAdaptor::desktopEntry() const
{
    // get the value of property DesktopEntry
    return qvariant_cast< QString >(parent()->property("DesktopEntry"));
}

bool MprisPluginRootAdaptor::hasTrackList() const
{
    // get the value of property HasTrackList
    return qvariant_cast< bool >(parent()->property("HasTrackList"));
}

QString MprisPluginRootAdaptor::identity() const
{
    // get the value of property Identity
    return qvariant_cast< QString >(parent()->property("Identity"));
}

QStringList MprisPluginRootAdaptor::supportedMimeTypes() const
{
    // get the value of property SupportedMimeTypes
    return qvariant_cast< QStringList >(parent()->property("SupportedMimeTypes"));
}

QStringList MprisPluginRootAdaptor::supportedUriSchemes() const
{
    // get the value of property SupportedUriSchemes
    return qvariant_cast< QStringList >(parent()->property("SupportedUriSchemes"));
}

void MprisPluginRootAdaptor::Quit()
{
    // handle method call org.mpris.MediaPlayer2.Quit
    QMetaObject::invokeMethod(parent(), "Quit");
}

void MprisPluginRootAdaptor::Raise()
{
    // handle method call org.mpris.MediaPlayer2.Raise
    QMetaObject::invokeMethod(parent(), "Raise");
}
