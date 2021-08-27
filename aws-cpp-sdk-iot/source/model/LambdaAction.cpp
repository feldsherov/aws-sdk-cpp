﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/LambdaAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

LambdaAction::LambdaAction() : 
    m_functionArnHasBeenSet(false)
{
}

LambdaAction::LambdaAction(JsonView jsonValue) : 
    m_functionArnHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaAction& LambdaAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionArn"))
  {
    m_functionArn = jsonValue.GetString("functionArn");

    m_functionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaAction::Jsonize() const
{
  JsonValue payload;

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("functionArn", m_functionArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
