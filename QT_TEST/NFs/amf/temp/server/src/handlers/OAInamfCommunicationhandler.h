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

#ifndef OAI_namfCommunicationhandler_H
#define OAI_namfCommunicationhandler_H

#include <functional>
#include <QObject>
#include <QStringList>
#include <QSharedPointer>
#include <QList>
#include <QMultiMap>
#include <QRegularExpression>

#include <qhttpengine/socket.h>
#include <qhttpengine/handler.h>
#include <qhttpengine/qobjecthandler.h>

#include "OAIIndividualSubscriptionDocumentApiHandler.h"
#include "OAIIndividualUeContextDocumentApiHandler.h"
#include "OAIN1N2IndividualSubscriptionDocumentApiHandler.h"
#include "OAIN1N2MessageCollectionDocumentApiHandler.h"
#include "OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler.h"
#include "OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler.h"
#include "OAINonUEN2MessagesCollectionDocumentApiHandler.h"
#include "OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler.h"
#include "OAISubscriptionsCollectionDocumentApiHandler.h"


namespace OpenAPI {

class OAInamfCommunicationhandler : public QObject
{
    Q_OBJECT
public:
    OAInamfCommunicationhandler();
    virtual ~OAInamfCommunicationhandler();

    void setUpRoutes();
    bool processRequest(QHttpEngine::Socket *socket);
    
    void setOAIIndividualSubscriptionDocumentApiHandler(QSharedPointer<OAIIndividualSubscriptionDocumentApiHandler> handler);
    void setOAIIndividualUeContextDocumentApiHandler(QSharedPointer<OAIIndividualUeContextDocumentApiHandler> handler);
    void setOAIN1N2IndividualSubscriptionDocumentApiHandler(QSharedPointer<OAIN1N2IndividualSubscriptionDocumentApiHandler> handler);
    void setOAIN1N2MessageCollectionDocumentApiHandler(QSharedPointer<OAIN1N2MessageCollectionDocumentApiHandler> handler);
    void setOAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler(QSharedPointer<OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler> handler);
    void setOAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler(QSharedPointer<OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler> handler);
    void setOAINonUEN2MessagesCollectionDocumentApiHandler(QSharedPointer<OAINonUEN2MessagesCollectionDocumentApiHandler> handler);
    void setOAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler(QSharedPointer<OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler> handler);
    void setOAISubscriptionsCollectionDocumentApiHandler(QSharedPointer<OAISubscriptionsCollectionDocumentApiHandler> handler);
private:
    QMap<QString, std::function<void(QHttpEngine::Socket *)>> Routes;
    QMultiMap<QString, std::function<void(QHttpEngine::Socket *)>> RoutesWithPathParam;

    bool handleRequest(QHttpEngine::Socket *socket);
    bool handleRequestAndExtractPathParam(QHttpEngine::Socket *socket);

    
    QSharedPointer<OAIIndividualSubscriptionDocumentApiHandler> mOAIIndividualSubscriptionDocumentApiHandler;
    QSharedPointer<OAIIndividualUeContextDocumentApiHandler> mOAIIndividualUeContextDocumentApiHandler;
    QSharedPointer<OAIN1N2IndividualSubscriptionDocumentApiHandler> mOAIN1N2IndividualSubscriptionDocumentApiHandler;
    QSharedPointer<OAIN1N2MessageCollectionDocumentApiHandler> mOAIN1N2MessageCollectionDocumentApiHandler;
    QSharedPointer<OAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler> mOAIN1N2SubscriptionsCollectionForIndividualUEContextsDocumentApiHandler;
    QSharedPointer<OAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler> mOAINonUEN2MessageNotificationIndividualSubscriptionDocumentApiHandler;
    QSharedPointer<OAINonUEN2MessagesCollectionDocumentApiHandler> mOAINonUEN2MessagesCollectionDocumentApiHandler;
    QSharedPointer<OAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler> mOAINonUEN2MessagesSubscriptionsCollectionDocumentApiHandler;
    QSharedPointer<OAISubscriptionsCollectionDocumentApiHandler> mOAISubscriptionsCollectionDocumentApiHandler;
protected:
    // override this method to provide custom class derived from ApiHandler classes
    virtual void createApiHandlers();

private :
    inline QString fromQHttpEngineMethod(QHttpEngine::Socket::Method method){
        switch( method ){
            case QHttpEngine::Socket::Method::OPTIONS:
                return QStringLiteral("OPTIONS");
            case QHttpEngine::Socket::Method::GET:
                return QStringLiteral("GET");
            case QHttpEngine::Socket::Method::HEAD:
                return QStringLiteral("HEAD");
            case QHttpEngine::Socket::Method::POST:
                return QStringLiteral("POST");
            case QHttpEngine::Socket::Method::PUT:
                return QStringLiteral("PUT");
            case QHttpEngine::Socket::Method::DELETE:
                return QStringLiteral("DELETE");
            case QHttpEngine::Socket::Method::TRACE:
                return QStringLiteral("TRACE");
            case QHttpEngine::Socket::Method::CONNECT:
                return QStringLiteral("CONNECT");
        }
        return QStringLiteral("");
    }

    inline QRegularExpressionMatch getRequestMatch(QString serverTemplatePath, QString requestPath){
        QStringList splitword = serverTemplatePath.split("{");
        //before
        QString before = splitword[0];
        QString middle = splitword[1].split("}")[0];
        QString after = splitword[1].split("}")[1];
        before.append("(?<");
        middle.append(">\\d)");
        QString path = QString("%1%2%3").arg(before).arg(middle).arg(after);
        QRegularExpression pathExpr(path);
        return pathExpr.match( requestPath );
    }

};


}

#endif // OAI_APIROUTER_H
