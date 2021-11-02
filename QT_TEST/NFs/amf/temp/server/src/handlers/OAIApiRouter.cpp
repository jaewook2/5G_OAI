#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>


#include "OAIApiRouter.h"
#include "OAInamfCommunicationhandler.h"
#include "OAInamfEventExposurehandler.h"


namespace OpenAPI{
    
OAIApiRouter::OAIApiRouter(){
    createApiserviceHandlers();
}

OAIApiRouter::~OAIApiRouter(){

}


void OAIApiRouter::createApiserviceHandlers(){
    mOAInamfCommunicationHandler = QSharedPointer<OAInamfCommunicationhandler>::create();
    mOAInamfEventExposureHandler = QSharedPointer<OAInamfEventExposurehandler>::create();
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