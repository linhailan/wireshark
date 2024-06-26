/* Do not modify this file. Changes will be overwritten.                      */
/* Generated automatically by the ASN.1 to Wireshark dissector compiler       */
/* packet-p7.h                                                                */
/* asn2wrs.py -b -C -q -L -p p7 -c ./p7.cnf -s ./packet-p7-template -D . -O ../.. MSAbstractService.asn MSGeneralAttributeTypes.asn MSAccessProtocol.asn MSUpperBounds.asn */

/* packet-p7.h
 * Routines for X.413 (P7) packet dissection
 * Graeme Lunt 2007
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef PACKET_P7_H
#define PACKET_P7_H

extern const value_string p7_SignatureStatus_vals[];
int dissect_p7_SequenceNumber(bool implicit_tag _U_, tvbuff_t *tvb _U_, int offset _U_, asn1_ctx_t *actx _U_, proto_tree *tree _U_, int hf_index _U_);
int dissect_p7_SignatureStatus(bool implicit_tag _U_, tvbuff_t *tvb _U_, int offset _U_, asn1_ctx_t *actx _U_, proto_tree *tree _U_, int hf_index _U_);

#endif  /* PACKET_P7_H */
