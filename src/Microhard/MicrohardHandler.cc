/****************************************************************************
 *
 *   (c) 2019 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "MicrohardHandler.h"
#include "SettingsManager.h"
#include "QGCApplication.h"
#include "VideoManager.h"

QGC_LOGGING_CATEGORY(MicrohardLog,     "MicrohardLog")

//-----------------------------------------------------------------------------
MicrohardHandler::MicrohardHandler(QObject* parent)
    : QObject (parent)
{
}

//-----------------------------------------------------------------------------
MicrohardHandler::~MicrohardHandler()
{
    close();
}

//-----------------------------------------------------------------------------
bool
MicrohardHandler::close()
{
    bool res = false;
    if(_tcpSocket) {
        qCDebug(MicrohardLog) << "Close Microhard TCP socket on port" << _tcpSocket->localPort();
        _tcpSocket->close();
        _tcpSocket->deleteLater();
        _tcpSocket = nullptr;
        res = true;
    }
    return res;
}

//-----------------------------------------------------------------------------
bool
MicrohardHandler::_start(uint16_t port, QHostAddress addr)
{
    close();

    _tcpSocket = new QTcpSocket();
    QObject::connect(_tcpSocket, &QIODevice::readyRead, this, &MicrohardHandler::_readBytes);
    qCDebug(MicrohardLog) << "Connecting to" << addr;
    _tcpSocket->connectToHost(addr, port);
    //-- TODO: This has to be removed. It's blocking the main thread.
    if (!_tcpSocket->waitForConnected(1000)) {
        emit connected(0);
        close();
        return false;
    }

    return true;
}
