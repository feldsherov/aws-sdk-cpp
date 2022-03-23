﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CreateIdentityProviderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIdentityProviderResult::CreateIdentityProviderResult()
{
}

CreateIdentityProviderResult::CreateIdentityProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateIdentityProviderResult& CreateIdentityProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("identityProviderArn"))
  {
    m_identityProviderArn = jsonValue.GetString("identityProviderArn");

  }



  return *this;
}
