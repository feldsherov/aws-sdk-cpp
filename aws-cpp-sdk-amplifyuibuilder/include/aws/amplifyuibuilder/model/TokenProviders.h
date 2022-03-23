﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{
  enum class TokenProviders
  {
    NOT_SET,
    figma
  };

namespace TokenProvidersMapper
{
AWS_AMPLIFYUIBUILDER_API TokenProviders GetTokenProvidersForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForTokenProviders(TokenProviders value);
} // namespace TokenProvidersMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
