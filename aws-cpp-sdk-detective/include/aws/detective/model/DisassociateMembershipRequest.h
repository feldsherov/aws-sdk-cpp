﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class AWS_DETECTIVE_API DisassociateMembershipRequest : public DetectiveRequest
  {
  public:
    DisassociateMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateMembership"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the behavior graph to remove the member account from.</p> <p>The
     * member account's member status in the behavior graph must be
     * <code>ENABLED</code>.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph to remove the member account from.</p> <p>The
     * member account's member status in the behavior graph must be
     * <code>ENABLED</code>.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph to remove the member account from.</p> <p>The
     * member account's member status in the behavior graph must be
     * <code>ENABLED</code>.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph to remove the member account from.</p> <p>The
     * member account's member status in the behavior graph must be
     * <code>ENABLED</code>.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph to remove the member account from.</p> <p>The
     * member account's member status in the behavior graph must be
     * <code>ENABLED</code>.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph to remove the member account from.</p> <p>The
     * member account's member status in the behavior graph must be
     * <code>ENABLED</code>.</p>
     */
    inline DisassociateMembershipRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph to remove the member account from.</p> <p>The
     * member account's member status in the behavior graph must be
     * <code>ENABLED</code>.</p>
     */
    inline DisassociateMembershipRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph to remove the member account from.</p> <p>The
     * member account's member status in the behavior graph must be
     * <code>ENABLED</code>.</p>
     */
    inline DisassociateMembershipRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
