package main

import (
	amfcommunication "amf.com/amfcommunication"
	amfeventexposure "amf.com/amfeventexposure"
	amflocation "amf.com/amflocation"
	amfmt "amf.com/amfmt"
	"log"
	"net/http"

	"github.com/gorilla/mux"
)

func main() {
	log.Printf("Server started")
	router := mux.NewRouter().StrictSlash(true)
	router = amfcommunication.Routeramfcommunication(router)
	router = amfeventexposure.Routeramfeventexposure(router)
	router = amflocation.Routeramflocation(router)
	router = amfmt.Routeramfmt(router)

	log.Fatal(http.ListenAndServe(":8080", router))
}
