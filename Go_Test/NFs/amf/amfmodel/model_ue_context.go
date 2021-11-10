/*
 * Namf_Communication
 *
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.1.5
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package amfmodel

import (
"amf.com/amfcommon"

	"time"
)

type UeContext struct {

	Supi string `json:"supi,omitempty"`

	SupiUnauthInd bool `json:"supiUnauthInd,omitempty"`

	GpsiList []string `json:"gpsiList,omitempty"`

	Pei string `json:"pei,omitempty"`

	UdmGroupId string `json:"udmGroupId,omitempty"`

	AusfGroupId string `json:"ausfGroupId,omitempty"`

	PcfGroupId string `json:"pcfGroupId,omitempty"`

	RoutingIndicator string `json:"routingIndicator,omitempty"`

	GroupList []string `json:"groupList,omitempty"`

	DrxParameter string `json:"drxParameter,omitempty"`

	SubRfsp int32 `json:"subRfsp,omitempty"`

	UsedRfsp int32 `json:"usedRfsp,omitempty"`

	SubUeAmbr Ambr `json:"subUeAmbr,omitempty"`

	SmsfId string `json:"smsfId,omitempty"`

	SeafData SeafData `json:"seafData,omitempty"`

	Var5gMmCapability string `json:"5gMmCapability,omitempty"`

	PcfId string `json:"pcfId,omitempty"`

	PcfSetId string `json:"pcfSetId,omitempty"`

	PcfAmpServiceSetId string `json:"pcfAmpServiceSetId,omitempty"`

	PcfUepServiceSetId string `json:"pcfUepServiceSetId,omitempty"`

	PcfBinding SbiBindingLevel `json:"pcfBinding,omitempty"`

	PcfAmPolicyUri string `json:"pcfAmPolicyUri,omitempty"`

	AmPolicyReqTriggerList []PolicyReqTrigger `json:"amPolicyReqTriggerList,omitempty"`

	PcfUePolicyUri string `json:"pcfUePolicyUri,omitempty"`

	UePolicyReqTriggerList []PolicyReqTrigger `json:"uePolicyReqTriggerList,omitempty"`

	HpcfId string `json:"hpcfId,omitempty"`

	HpcfSetId string `json:"hpcfSetId,omitempty"`

	RestrictedRatList []RatType `json:"restrictedRatList,omitempty"`

	ForbiddenAreaList []Area `json:"forbiddenAreaList,omitempty"`

	ServiceAreaRestriction ServiceAreaRestriction `json:"serviceAreaRestriction,omitempty"`

	RestrictedCoreNwTypeList []CoreNetworkType `json:"restrictedCoreNwTypeList,omitempty"`

	EventSubscriptionList []ExtAmfEventSubscription `json:"eventSubscriptionList,omitempty"`

	MmContextList []MmContext `json:"mmContextList,omitempty"`

	SessionContextList []PduSessionContext `json:"sessionContextList,omitempty"`

	TraceData *TraceData `json:"traceData,omitempty"`

	ServiceGapExpiryTime time.Time `json:"serviceGapExpiryTime,omitempty"`

	StnSr string `json:"stnSr,omitempty"`

	CMsisdn string `json:"cMsisdn,omitempty"`

	MsClassmark2 string `json:"msClassmark2,omitempty"`

	SupportedCodecList []string `json:"supportedCodecList,omitempty"`

	SmallDataRateStatusInfos []SmallDataRateStatusInfo `json:"smallDataRateStatusInfos,omitempty"`

	RestrictedPrimaryRatList []RatType `json:"restrictedPrimaryRatList,omitempty"`

	RestrictedSecondaryRatList []RatType `json:"restrictedSecondaryRatList,omitempty"`

	V2xContext V2xContext `json:"v2xContext,omitempty"`

	LteCatMInd bool `json:"lteCatMInd,omitempty"`

	MoExpDataCounter MoExpDataCounter `json:"moExpDataCounter,omitempty"`

	CagData CagData `json:"cagData,omitempty"`

	ManagementMdtInd bool `json:"managementMdtInd,omitempty"`

	ImmediateMdtConf ImmediateMdtConf `json:"immediateMdtConf,omitempty"`

	EcRestrictionDataWb EcRestrictionDataWb `json:"ecRestrictionDataWb,omitempty"`

	EcRestrictionDataNb bool `json:"ecRestrictionDataNb,omitempty"`

	IabOperationAllowed bool `json:"iabOperationAllowed,omitempty"`

	UsedServiceAreaRestriction ServiceAreaRestriction `json:"usedServiceAreaRestriction,omitempty"`

	// A map(list of key-value pairs) where praId serves as key.
	PraInAmPolicy map[string]PresenceInfo `json:"praInAmPolicy,omitempty"`

	UpdpSubscriptionData UpdpSubscriptionData `json:"updpSubscriptionData,omitempty"`
}

// AssertUeContextRequired checks if the required fields are not zero-ed
func AssertUeContextRequired(obj UeContext) error {
	if err := AssertAmbrRequired(obj.SubUeAmbr); err != nil {
		return err
	}
	if err := AssertSeafDataRequired(obj.SeafData); err != nil {
		return err
	}
	if err := AssertSbiBindingLevelRequired(obj.PcfBinding); err != nil {
		return err
	}
	for _, el := range obj.AmPolicyReqTriggerList {
		if err := AssertPolicyReqTriggerRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.UePolicyReqTriggerList {
		if err := AssertPolicyReqTriggerRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.RestrictedRatList {
		if err := AssertRatTypeRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.ForbiddenAreaList {
		if err := AssertAreaRequired(el); err != nil {
			return err
		}
	}
	if err := AssertServiceAreaRestrictionRequired(obj.ServiceAreaRestriction); err != nil {
		return err
	}
	for _, el := range obj.RestrictedCoreNwTypeList {
		if err := AssertCoreNetworkTypeRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.EventSubscriptionList {
		if err := AssertExtAmfEventSubscriptionRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.MmContextList {
		if err := AssertMmContextRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.SessionContextList {
		if err := AssertPduSessionContextRequired(el); err != nil {
			return err
		}
	}
	if obj.TraceData != nil {
		if err := AssertTraceDataRequired(*obj.TraceData); err != nil {
			return err
		}
	}
	for _, el := range obj.SmallDataRateStatusInfos {
		if err := AssertSmallDataRateStatusInfoRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.RestrictedPrimaryRatList {
		if err := AssertRatTypeRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.RestrictedSecondaryRatList {
		if err := AssertRatTypeRequired(el); err != nil {
			return err
		}
	}
	if err := AssertV2xContextRequired(obj.V2xContext); err != nil {
		return err
	}
	if err := AssertMoExpDataCounterRequired(obj.MoExpDataCounter); err != nil {
		return err
	}
	if err := AssertCagDataRequired(obj.CagData); err != nil {
		return err
	}
	if err := AssertImmediateMdtConfRequired(obj.ImmediateMdtConf); err != nil {
		return err
	}
	if err := AssertEcRestrictionDataWbRequired(obj.EcRestrictionDataWb); err != nil {
		return err
	}
	if err := AssertServiceAreaRestrictionRequired(obj.UsedServiceAreaRestriction); err != nil {
		return err
	}
	if err := AssertUpdpSubscriptionDataRequired(obj.UpdpSubscriptionData); err != nil {
		return err
	}
	return nil
}

// AssertRecurseUeContextRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of UeContext (e.g. [][]UeContext), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseUeContextRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aUeContext, ok := obj.(UeContext)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertUeContextRequired(aUeContext)
	})
}