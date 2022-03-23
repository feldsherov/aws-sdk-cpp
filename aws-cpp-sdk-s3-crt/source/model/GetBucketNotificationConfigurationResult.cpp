﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/GetBucketNotificationConfigurationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetBucketNotificationConfigurationResult::GetBucketNotificationConfigurationResult()
{
}

GetBucketNotificationConfigurationResult::GetBucketNotificationConfigurationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetBucketNotificationConfigurationResult& GetBucketNotificationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode topicConfigurationsNode = resultNode.FirstChild("TopicConfiguration");
    if(!topicConfigurationsNode.IsNull())
    {
      XmlNode topicConfigurationMember = topicConfigurationsNode;
      while(!topicConfigurationMember.IsNull())
      {
        m_topicConfigurations.push_back(topicConfigurationMember);
        topicConfigurationMember = topicConfigurationMember.NextNode("TopicConfiguration");
      }

    }
    XmlNode queueConfigurationsNode = resultNode.FirstChild("QueueConfiguration");
    if(!queueConfigurationsNode.IsNull())
    {
      XmlNode queueConfigurationMember = queueConfigurationsNode;
      while(!queueConfigurationMember.IsNull())
      {
        m_queueConfigurations.push_back(queueConfigurationMember);
        queueConfigurationMember = queueConfigurationMember.NextNode("QueueConfiguration");
      }

    }
    XmlNode lambdaFunctionConfigurationsNode = resultNode.FirstChild("CloudFunctionConfiguration");
    if(!lambdaFunctionConfigurationsNode.IsNull())
    {
      XmlNode cloudFunctionConfigurationMember = lambdaFunctionConfigurationsNode;
      while(!cloudFunctionConfigurationMember.IsNull())
      {
        m_lambdaFunctionConfigurations.push_back(cloudFunctionConfigurationMember);
        cloudFunctionConfigurationMember = cloudFunctionConfigurationMember.NextNode("CloudFunctionConfiguration");
      }

    }
    XmlNode eventBridgeConfigurationNode = resultNode.FirstChild("EventBridgeConfiguration");
    if(!eventBridgeConfigurationNode.IsNull())
    {
      m_eventBridgeConfiguration = eventBridgeConfigurationNode;
    }
  }

  return *this;
}
