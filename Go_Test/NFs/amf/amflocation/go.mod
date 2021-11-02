module amflocation
go 1.13
require (
amf.com/amfcommon v0.0.0
amf.com/amfmodel v0.0.0
github.com/gorilla/mux v1.7.3
)

replace (
amf.com/amfcommon v0.0.0 => ../amfcommon
amf.com/amfmodel v0.0.0 => ../amfmodel
)