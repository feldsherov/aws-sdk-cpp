﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyClientVpnEndpointResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyClientVpnEndpointResponse::ModifyClientVpnEndpointResponse() : 
    m_return(false)
{
}

ModifyClientVpnEndpointResponse::ModifyClientVpnEndpointResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_return(false)
{
  *this = result;
}

ModifyClientVpnEndpointResponse& ModifyClientVpnEndpointResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyClientVpnEndpointResponse"))
  {
    resultNode = rootNode.FirstChild("ModifyClientVpnEndpointResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode returnNode = resultNode.FirstChild("return");
    if(!returnNode.IsNull())
    {
      m_return = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyClientVpnEndpointResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
