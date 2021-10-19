package main

import (
	openapi "AMF/go"
	"log"
	"net/http"

	"github.com/gorilla/mux"
)

func main() {
	log.Printf("Server started")
	router := mux.NewRouter().StrictSlash(true)
	router = openapi.NamfCommunicationRouter(router)
	//router = openapi.NamfEventExposureRouter(router)
	//router = openapi.NamfLocationRouter(router)
	//router = openapi.NamfMTRouter(router)

	log.Fatal(http.ListenAndServe(":8080", router))
}
