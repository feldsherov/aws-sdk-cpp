﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/DeleteReportGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteReportGroupRequest::DeleteReportGroupRequest() : 
    m_arnHasBeenSet(false),
    m_deleteReports(false),
    m_deleteReportsHasBeenSet(false)
{
}

Aws::String DeleteReportGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_deleteReportsHasBeenSet)
  {
   payload.WithBool("deleteReports", m_deleteReports);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteReportGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.DeleteReportGroup"));
  return headers;

}




