/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.1.5
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIEEIndividualSubscriptionDocumentApiRequest_H
#define OAI_OAIEEIndividualSubscriptionDocumentApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIAmfUpdatedEventSubscription.h"
#include "OAIProblemDetails.h"
#include "OAIRedirectResponse.h"
#include <QString>
#include "OAIEEIndividualSubscriptionDocumentApiHandler.h"

namespace OpenAPI {

class OAIEEIndividualSubscriptionDocumentApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIEEIndividualSubscriptionDocumentApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIEEIndividualSubscriptionDocumentApiHandler> handler);
    virtual ~OAIEEIndividualSubscriptionDocumentApiRequest();

    void deleteSubscriptionRequest(const QString& subscription_id);
    

    void deleteSubscriptionResponse();
    

    void deleteSubscriptionError(QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);


    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void deleteSubscription(QString subscription_id);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIEEIndividualSubscriptionDocumentApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIEEIndividualSubscriptionDocumentApiRequest_H
