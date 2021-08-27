﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/Text.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Text::Text() : 
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Text::Text(JsonView jsonValue) : 
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Text& Text::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Locale"))
  {
    m_locale = LocaleMapper::GetLocaleForName(jsonValue.GetString("Locale"));

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Text::Jsonize() const
{
  JsonValue payload;

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", LocaleMapper::GetNameForLocale(m_locale));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
