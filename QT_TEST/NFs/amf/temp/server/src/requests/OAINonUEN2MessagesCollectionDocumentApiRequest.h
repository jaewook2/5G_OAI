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

#ifndef OAI_OAINonUEN2MessagesCollectionDocumentApiRequest_H
#define OAI_OAINonUEN2MessagesCollectionDocumentApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIN2InformationTransferError.h"
#include "OAIN2InformationTransferReqData.h"
#include "OAIN2InformationTransferRspData.h"
#include "OAIProblemDetails.h"
#include "OAIRedirectResponse.h"
#include <QString>
#include "OAINonUEN2MessagesCollectionDocumentApiHandler.h"

namespace OpenAPI {

class OAINonUEN2MessagesCollectionDocumentApiRequest : public QObject
{
    Q_OBJECT

public:
    OAINonUEN2MessagesCollectionDocumentApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAINonUEN2MessagesCollectionDocumentApiHandler> handler);
    virtual ~OAINonUEN2MessagesCollectionDocumentApiRequest();

    void nonUeN2MessageTransferRequest();
    

    void nonUeN2MessageTransferResponse(const OAIN2InformationTransferRspData& res);
    

    void nonUeN2MessageTransferError(const OAIN2InformationTransferRspData& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void nonUeN2MessageTransfer(OAIN2InformationTransferReqData oain2_information_transfer_req_data);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAINonUEN2MessagesCollectionDocumentApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAINonUEN2MessagesCollectionDocumentApiRequest_H
