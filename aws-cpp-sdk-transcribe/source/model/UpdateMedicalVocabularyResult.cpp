﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/UpdateMedicalVocabularyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateMedicalVocabularyResult::UpdateMedicalVocabularyResult() : 
    m_languageCode(LanguageCode::NOT_SET),
    m_vocabularyState(VocabularyState::NOT_SET)
{
}

UpdateMedicalVocabularyResult::UpdateMedicalVocabularyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_languageCode(LanguageCode::NOT_SET),
    m_vocabularyState(VocabularyState::NOT_SET)
{
  *this = result;
}

UpdateMedicalVocabularyResult& UpdateMedicalVocabularyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("VocabularyState"))
  {
    m_vocabularyState = VocabularyStateMapper::GetVocabularyStateForName(jsonValue.GetString("VocabularyState"));

  }



  return *this;
}
