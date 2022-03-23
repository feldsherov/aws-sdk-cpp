﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/DescribeMultiRegionAccessPointOperationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeMultiRegionAccessPointOperationResult::DescribeMultiRegionAccessPointOperationResult()
{
}

DescribeMultiRegionAccessPointOperationResult::DescribeMultiRegionAccessPointOperationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeMultiRegionAccessPointOperationResult& DescribeMultiRegionAccessPointOperationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode asyncOperationNode = resultNode.FirstChild("AsyncOperation");
    if(!asyncOperationNode.IsNull())
    {
      m_asyncOperation = asyncOperationNode;
    }
  }

  return *this;
}
