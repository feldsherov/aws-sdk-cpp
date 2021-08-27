﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/GetBucketRequestPaymentResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetBucketRequestPaymentResult::GetBucketRequestPaymentResult() : 
    m_payer(Payer::NOT_SET)
{
}

GetBucketRequestPaymentResult::GetBucketRequestPaymentResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_payer(Payer::NOT_SET)
{
  *this = result;
}

GetBucketRequestPaymentResult& GetBucketRequestPaymentResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode payerNode = resultNode.FirstChild("Payer");
    if(!payerNode.IsNull())
    {
      m_payer = PayerMapper::GetPayerForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(payerNode.GetText()).c_str()).c_str());
    }
  }

  return *this;
}
