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
)

type NfTypeAnyOf string

// List of NfTypeAnyOf
const (
	NFTYPEANYOF_NRF NfTypeAnyOf = "NRF"
	NFTYPEANYOF_UDM NfTypeAnyOf = "UDM"
	NFTYPEANYOF_AMF NfTypeAnyOf = "AMF"
	NFTYPEANYOF_SMF NfTypeAnyOf = "SMF"
	NFTYPEANYOF_AUSF NfTypeAnyOf = "AUSF"
	NFTYPEANYOF_NEF NfTypeAnyOf = "NEF"
	NFTYPEANYOF_PCF NfTypeAnyOf = "PCF"
	NFTYPEANYOF_SMSF NfTypeAnyOf = "SMSF"
	NFTYPEANYOF_NSSF NfTypeAnyOf = "NSSF"
	NFTYPEANYOF_UDR NfTypeAnyOf = "UDR"
	NFTYPEANYOF_LMF NfTypeAnyOf = "LMF"
	NFTYPEANYOF_GMLC NfTypeAnyOf = "GMLC"
	NFTYPEANYOF__5_G_EIR NfTypeAnyOf = "5G_EIR"
	NFTYPEANYOF_SEPP NfTypeAnyOf = "SEPP"
	NFTYPEANYOF_UPF NfTypeAnyOf = "UPF"
	NFTYPEANYOF_N3_IWF NfTypeAnyOf = "N3IWF"
	NFTYPEANYOF_AF NfTypeAnyOf = "AF"
	NFTYPEANYOF_UDSF NfTypeAnyOf = "UDSF"
	NFTYPEANYOF_BSF NfTypeAnyOf = "BSF"
	NFTYPEANYOF_CHF NfTypeAnyOf = "CHF"
	NFTYPEANYOF_NWDAF NfTypeAnyOf = "NWDAF"
	NFTYPEANYOF_PCSCF NfTypeAnyOf = "PCSCF"
	NFTYPEANYOF_CBCF NfTypeAnyOf = "CBCF"
	NFTYPEANYOF_HSS NfTypeAnyOf = "HSS"
	NFTYPEANYOF_UCMF NfTypeAnyOf = "UCMF"
	NFTYPEANYOF_SOR_AF NfTypeAnyOf = "SOR_AF"
	NFTYPEANYOF_SPAF NfTypeAnyOf = "SPAF"
	NFTYPEANYOF_MME NfTypeAnyOf = "MME"
	NFTYPEANYOF_SCSAS NfTypeAnyOf = "SCSAS"
	NFTYPEANYOF_SCEF NfTypeAnyOf = "SCEF"
	NFTYPEANYOF_SCP NfTypeAnyOf = "SCP"
	NFTYPEANYOF_NSSAAF NfTypeAnyOf = "NSSAAF"
	NFTYPEANYOF_ICSCF NfTypeAnyOf = "ICSCF"
	NFTYPEANYOF_SCSCF NfTypeAnyOf = "SCSCF"
	NFTYPEANYOF_DRA NfTypeAnyOf = "DRA"
	NFTYPEANYOF_IMS_AS NfTypeAnyOf = "IMS_AS"
)

// AssertNfTypeAnyOfRequired checks if the required fields are not zero-ed
func AssertNfTypeAnyOfRequired(obj NfTypeAnyOf) error {
	return nil
}

// AssertRecurseNfTypeAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of NfTypeAnyOf (e.g. [][]NfTypeAnyOf), otherwise amfcommon.ErrTypeAssertionError is thrown.
func AssertRecurseNfTypeAnyOfRequired(objSlice interface{}) error {
	return amfcommon.AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNfTypeAnyOf, ok := obj.(NfTypeAnyOf)
		if !ok {
			return amfcommon.ErrTypeAssertionError
		}
		return AssertNfTypeAnyOfRequired(aNfTypeAnyOf)
	})
}
