#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>


#include "OAIApiRouter.h"
#include "OAInamfCommunicationHandler.h"
#include "OAInamfEventExposureHandler.h"


namespace OpenAPI{
    
OAIApiRouter::OAIApiRouter(){
    createApiserviceHandlers();
}

OAIApiRouter::~OAIApiRouter(){

}


void OAIApiRouter::createApiserviceHandlers(){
    mOAInamfCommunicationHandler = QSharedPointer<OAInamfCommunicationHandler>::create();
    mOAInamfEventExposureHandler = QSharedPointer<OAInamfEventExposureHandler>::create();
}


void OAIApiRouter::setUpRoutes() {
    mOAInamfCommunicationHandler->setUpRoutes();
    mOAInamfEventExposureHandler->setUpRoutes();
}

void OAIApiRouter::processRequest(QHttpEngine::Socket *socket) {
    if( mOAInamfCommunicationHandler->processRequest(socket) ){
        return;
    }
    if( mOAInamfEventExposureHandler->processRequest(socket) ){
        return;
    }
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }

}

}