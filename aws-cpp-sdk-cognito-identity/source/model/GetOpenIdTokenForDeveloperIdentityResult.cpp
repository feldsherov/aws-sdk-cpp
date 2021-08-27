﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/model/GetOpenIdTokenForDeveloperIdentityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOpenIdTokenForDeveloperIdentityResult::GetOpenIdTokenForDeveloperIdentityResult()
{
}

GetOpenIdTokenForDeveloperIdentityResult::GetOpenIdTokenForDeveloperIdentityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOpenIdTokenForDeveloperIdentityResult& GetOpenIdTokenForDeveloperIdentityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityId"))
  {
    m_identityId = jsonValue.GetString("IdentityId");

  }

  if(jsonValue.ValueExists("Token"))
  {
    m_token = jsonValue.GetString("Token");

  }



  return *this;
}
