﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DeleteReplicationTaskAssessmentRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteReplicationTaskAssessmentRunResult::DeleteReplicationTaskAssessmentRunResult()
{
}

DeleteReplicationTaskAssessmentRunResult::DeleteReplicationTaskAssessmentRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteReplicationTaskAssessmentRunResult& DeleteReplicationTaskAssessmentRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplicationTaskAssessmentRun"))
  {
    m_replicationTaskAssessmentRun = jsonValue.GetObject("ReplicationTaskAssessmentRun");

  }



  return *this;
}
