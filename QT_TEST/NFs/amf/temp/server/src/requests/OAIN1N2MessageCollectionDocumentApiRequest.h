/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.1.5
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIN1N2MessageCollectionDocumentApiRequest_H
#define OAI_OAIN1N2MessageCollectionDocumentApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIN1N2MessageTransferError.h"
#include "OAIN1N2MessageTransferReqData.h"
#include "OAIN1N2MessageTransferRspData.h"
#include "OAIProblemDetails.h"
#include "OAIRedirectResponse.h"
#include <QString>
#include "OAIN1N2MessageCollectionDocumentApiHandler.h"

namespace OpenAPI {

class OAIN1N2MessageCollectionDocumentApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIN1N2MessageCollectionDocumentApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIN1N2MessageCollectionDocumentApiHandler> handler);
    virtual ~OAIN1N2MessageCollectionDocumentApiRequest();

    void n1N2MessageTransferRequest(const QString& ue_context_id);
    

    void n1N2MessageTransferResponse(const OAIN1N2MessageTransferRspData& res);
    

    void n1N2MessageTransferError(const OAIN1N2MessageTransferRspData& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void n1N2MessageTransfer(QString ue_context_id, OAIN1N2MessageTransferReqData oain1_n2_message_transfer_req_data);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIN1N2MessageCollectionDocumentApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIN1N2MessageCollectionDocumentApiRequest_H