/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.1.4
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_APIROUTER_H
#define OAI_APIROUTER_H

#include <functional>
#include <QObject>
#include <QStringList>
#include <QSharedPointer>


#include <qhttpengine/socket.h>
#include <qhttpengine/handler.h>
#include <qhttpengine/qobjecthandler.h>

#include "OAInamfCommunicationHandler.h"
#include "OAInamfEventExposureHandler.h"



namespace OpenAPI {

class OAIApiRequestHandler : public  QHttpEngine::QObjectHandler
{
    Q_OBJECT
signals:
    void requestReceived(QHttpEngine::Socket *socket);

protected:
    virtual void process(QHttpEngine::Socket *socket, const QString &path){
        Q_UNUSED(path);

        // If the slot requires all data to be received, check to see if this is
        // already the case, otherwise, wait until the rest of it arrives
        if (socket->bytesAvailable() >= socket->contentLength()) {
            emit requestReceived(socket);
        } else {
            connect(socket, &QHttpEngine::Socket::readChannelFinished, [this, socket]() {
                emit requestReceived(socket);
            });
        }
    }
};

class OAIApiRouter : public QObject
{
    Q_OBJECT
public:
    OAIApiRouter();
    virtual ~OAIApiRouter();

    void setUpRoutes();
    void processRequest(QHttpEngine::Socket *socket);
    
    
    QSharedPointer<OAInamfCommunicationHandler> mOAInamfCommunicationHandler;
    QSharedPointer<OAInamfEventExposureHandler> mOAInamfEventExposureHandler;
   
protected:
    // override this method to provide custom class derived from ApiHandler classes
    virtual void createApiserviceHandlers();

};


}

#endif // OAI_APIROUTER_H
