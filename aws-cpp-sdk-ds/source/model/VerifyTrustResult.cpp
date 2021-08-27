﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/VerifyTrustResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

VerifyTrustResult::VerifyTrustResult()
{
}

VerifyTrustResult::VerifyTrustResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

VerifyTrustResult& VerifyTrustResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrustId"))
  {
    m_trustId = jsonValue.GetString("TrustId");

  }



  return *this;
}
