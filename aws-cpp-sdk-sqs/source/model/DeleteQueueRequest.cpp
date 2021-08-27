﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/DeleteQueueRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SQS::Model;
using namespace Aws::Utils;

DeleteQueueRequest::DeleteQueueRequest() : 
    m_queueUrlHasBeenSet(false)
{
}

Aws::String DeleteQueueRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteQueue&";
  if(m_queueUrlHasBeenSet)
  {
    ss << "QueueUrl=" << StringUtils::URLEncode(m_queueUrl.c_str()) << "&";
  }

  ss << "Version=2012-11-05";
  return ss.str();
}


void  DeleteQueueRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
