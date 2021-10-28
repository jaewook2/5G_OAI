#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>


#include "OAIApiRouter.h"
#include "mOAInamfCommunicationHandler.h"


namespace OpenAPI{
    
OAIApiRouter::OAIApiRouter(){
    createApiserviceHandlers()
}

OAIApiRouter::~OAIApiRouter(){

}


void OAIApiRouter::createApiserviceHandlers(){
    mOAInamfCommunicationHandler =  QSharedPointer<mAInamfCommunicationHandler>::create();
}


void OAIApiRouter::setUpRoutes() {
    mOAInamfCommunicationHandler.setUpRoute()
}

void OAIApiRouter::proceeReqeuest(QHttpEngine::Socket * socket) {
    if( handleRequest(socket) ){
        return;
    }
    if( handleRequestAndExtractPathParam(socket) ){
        return;
    }
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }

}

bool OAIApiRouter::handleRequest(QHttpEngine::Socket *socket){
    result = false;
    result = mOAInamfCommunicationHandler->handleRequest(*socket);
    return result;
}
bool OAIApiRouter::handleRequestAndExtractPathParam(QHttpEngine::Socket *socket){
    result = falase;
    result = mOAInamfCommunicationHandler->handleRequestAndExtractPathParam(*socket)
    return result;
}
}