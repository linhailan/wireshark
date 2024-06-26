/******************************************************************************
** Copyright (C) 2006-2015 ascolab GmbH. All Rights Reserved.
** Web: http://www.ascolab.com
**
** SPDX-License-Identifier: GPL-2.0-or-later
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** Project: OpcUa Wireshark Plugin
**
** Description: OpcUa Enum Type Parser
**
** This file was autogenerated on 13.10.2015.
** DON'T MODIFY THIS FILE!
** XXX - well, except that you may have to.  See the README.
**
******************************************************************************/

#include <glib.h>
#include <epan/packet.h>

extern int ett_opcua_array_NodeIdType;
extern int ett_opcua_array_NamingRuleType;
extern int ett_opcua_array_OpenFileMode;
extern int ett_opcua_array_TrustListMasks;
extern int ett_opcua_array_IdType;
extern int ett_opcua_array_NodeClass;
extern int ett_opcua_array_ApplicationType;
extern int ett_opcua_array_MessageSecurityMode;
extern int ett_opcua_array_UserTokenType;
extern int ett_opcua_array_SecurityTokenRequestType;
extern int ett_opcua_array_NodeAttributesMask;
extern int ett_opcua_array_AttributeWriteMask;
extern int ett_opcua_array_BrowseDirection;
extern int ett_opcua_array_BrowseResultMask;
extern int ett_opcua_array_ComplianceLevel;
extern int ett_opcua_array_FilterOperator;
extern int ett_opcua_array_TimestampsToReturn;
extern int ett_opcua_array_HistoryUpdateType;
extern int ett_opcua_array_PerformUpdateType;
extern int ett_opcua_array_MonitoringMode;
extern int ett_opcua_array_DataChangeTrigger;
extern int ett_opcua_array_DeadbandType;
extern int ett_opcua_array_EnumeratedTestType;
extern int ett_opcua_array_RedundancySupport;
extern int ett_opcua_array_ServerState;
extern int ett_opcua_array_ModelChangeStructureVerbMask;
extern int ett_opcua_array_AxisScaleEnumeration;
extern int ett_opcua_array_ExceptionDeviationFormat;
extern int ett_opcua_array_AttributeId;

void parseNodeIdType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseNamingRuleType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseOpenFileMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseTrustListMasks(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseIdType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseNodeClass(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseApplicationType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseMessageSecurityMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseUserTokenType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseSecurityTokenRequestType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseNodeAttributesMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseAttributeWriteMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseBrowseDirection(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseComplianceLevel(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseFilterOperator(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseTimestampsToReturn(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseHistoryUpdateType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parsePerformUpdateType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseMonitoringMode(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseDataChangeTrigger(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseDeadbandType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseEnumeratedTestType(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseRedundancySupport(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseServerState(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseModelChangeStructureVerbMask(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseAxisScaleEnumeration(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseExceptionDeviationFormat(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void parseAttributeId(proto_tree *tree, tvbuff_t *tvb, packet_info *pinfo, int *pOffset);
void registerEnumTypes(int proto);
