﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/UpdateApplicationVersionResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

UpdateApplicationVersionResult::UpdateApplicationVersionResult()
{
}

UpdateApplicationVersionResult::UpdateApplicationVersionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

UpdateApplicationVersionResult& UpdateApplicationVersionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "UpdateApplicationVersionResult"))
  {
    resultNode = rootNode.FirstChild("UpdateApplicationVersionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode applicationVersionNode = resultNode.FirstChild("ApplicationVersion");
    if(!applicationVersionNode.IsNull())
    {
      m_applicationVersion = applicationVersionNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::UpdateApplicationVersionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
