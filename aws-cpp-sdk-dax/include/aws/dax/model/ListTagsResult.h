﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dax/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DAX
{
namespace Model
{
  class AWS_DAX_API ListTagsResult
  {
  public:
    ListTagsResult();
    ListTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tags currently associated with the DAX cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags currently associated with the DAX cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>A list of tags currently associated with the DAX cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of tags currently associated with the DAX cluster.</p>
     */
    inline ListTagsResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags currently associated with the DAX cluster.</p>
     */
    inline ListTagsResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags currently associated with the DAX cluster.</p>
     */
    inline ListTagsResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags currently associated with the DAX cluster.</p>
     */
    inline ListTagsResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>If this value is present, there are additional results to be displayed. To
     * retrieve them, call <code>ListTags</code> again, with <code>NextToken</code> set
     * to this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If this value is present, there are additional results to be displayed. To
     * retrieve them, call <code>ListTags</code> again, with <code>NextToken</code> set
     * to this value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If this value is present, there are additional results to be displayed. To
     * retrieve them, call <code>ListTags</code> again, with <code>NextToken</code> set
     * to this value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If this value is present, there are additional results to be displayed. To
     * retrieve them, call <code>ListTags</code> again, with <code>NextToken</code> set
     * to this value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If this value is present, there are additional results to be displayed. To
     * retrieve them, call <code>ListTags</code> again, with <code>NextToken</code> set
     * to this value.</p>
     */
    inline ListTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If this value is present, there are additional results to be displayed. To
     * retrieve them, call <code>ListTags</code> again, with <code>NextToken</code> set
     * to this value.</p>
     */
    inline ListTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If this value is present, there are additional results to be displayed. To
     * retrieve them, call <code>ListTags</code> again, with <code>NextToken</code> set
     * to this value.</p>
     */
    inline ListTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Tag> m_tags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
