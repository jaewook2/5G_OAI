# 5G_OAI
## go-server auto
- [x] Jsondata 해결 ==> template file 수정
- [ ] query.Get 파트 해결 할 것.
- [ ] Unknowntype 해결 필요
- [ ] golang <==> c언어 간의 해결방안 고려.
- 미비한부분
  - [ ]: python을 통해 문자열을 중간에 넣는 기능 필요
  - [ ]: 탬플릿 코드 수정시 어떤 부분이 어떻게 수정되는지 기입필요 ==> 
  - [x]: 미비한 error 파일 처리 unimport 처리 
  - [ ]: 설명서 및 코드 지속적으로 관리
  - [ ]: the auto-generator code should generate the API codes based on the origin files instead of modified files.
---
==> Oneof Datastructure error!
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
--- 
client part 붙이기 ==> configure에서 특정 service를 지칭해서 넣는형식으로
