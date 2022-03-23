﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to list the email templates present in your Amazon SES
   * account in the current Amazon Web Services Region. For more information, see the
   * <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailTemplatesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API ListEmailTemplatesRequest : public SESV2Request
  {
  public:
    ListEmailTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEmailTemplates"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A token returned from a previous call to <code>ListEmailTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to <code>ListEmailTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to <code>ListEmailTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListEmailTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a previous call to <code>ListEmailTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to <code>ListEmailTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline ListEmailTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListEmailTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline ListEmailTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListEmailTemplates</code> to
     * indicate the position in the list of email templates.</p>
     */
    inline ListEmailTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of results to show in a single call to
     * <code>ListEmailTemplates</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 1, and can be no more
     * than 10.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListEmailTemplates</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 1, and can be no more
     * than 10.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListEmailTemplates</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 1, and can be no more
     * than 10.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListEmailTemplates</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 1, and can be no more
     * than 10.</p>
     */
    inline ListEmailTemplatesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
