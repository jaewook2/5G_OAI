# 5G_OAI
## go-server auto
- [ ]: mod 파일 작성 function (처음부터 작성)
- [ ]: 마무리작업 필요 (unimport 처리 및 builtin method 처리)
- [ ]: 설명서 및 코드 지속적으로 관리


func (c *UeContextDocumentApiController) ProvideDomainSelectionInfo(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query := r.URL.Query()
	ueContextIdParam := params["ueContextId"]

	infoClassParam := query.Get("info-class")
	supportedFeaturesParam := query.Get("supported-features")
	oldGuamiParam := query.Get("old-guami")
	result, err := c.service.ProvideDomainSelectionInfo(r.Context(), ueContextIdParam, infoClassParam, supportedFeaturesParam, oldGuamiParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	amfcommon.EncodeJSONResponse(result.Body, &result.Code, w)

}
==> infoClassParam, oldGuamiParam
input infoClass amfmodel.UeContextInfoClass, oldGuami amfmodel.Guami

amfEventExposure
UNKNOWN_BASE_TYPE
