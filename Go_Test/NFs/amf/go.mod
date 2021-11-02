module amf

go 1.13

require (
	amf.com/amfcommon v0.0.0

	amf.com/amfcommunication v0.0.0
	amf.com/amfeventexposure v0.0.0
	amf.com/amflocation v0.0.0
	amf.com/amfmodel v0.0.0
	amf.com/amfmt v0.0.0
	github.com/gorilla/mux v1.7.3
)

replace (
	amf.com/amfcommon v0.0.0 => ./amfcommon
	amf.com/amfcommunication v0.0.0 => ./amfcommunication
	amf.com/amfeventexposure v0.0.0 => ./amfeventexposure
	amf.com/amflocation v0.0.0 => ./amflocation
	amf.com/amfmodel v0.0.0 => ./amfmodel
	amf.com/amfmt v0.0.0 => ./amfmt
)
